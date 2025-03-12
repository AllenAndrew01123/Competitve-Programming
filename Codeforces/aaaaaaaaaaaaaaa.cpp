#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

class UnionFind {
public:
    unordered_map<int, int> parent, rank;

    int find(int v) {
        if (parent[v] != v)
            parent[v] = find(parent[v]);
        return parent[v];
    }

    void unionSets(int u, int v) {
        int rootU = find(u), rootV = find(v);
        if (rootU != rootV) {
            if (rank[rootU] > rank[rootV])
                parent[rootV] = rootU;
            else if (rank[rootU] < rank[rootV])
                parent[rootU] = rootV;
            else {
                parent[rootV] = rootU;
                rank[rootU]++;
            }
        }
    }

    void addNode(int node, int par) {
        parent[node] = par;
        rank[node] = 0;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    UnionFind uf;
    int nextFreeVertex = 2;
    uf.addNode(1, 1);

    vector<int> results;

    for (int i = 0; i < q; ++i) {
        char type;
        cin >> type;
        if (type == '+') {
            int v;
            cin >> v;
            uf.addNode(nextFreeVertex, v);
            nextFreeVertex++;
        } else if (type == '-') {
            int v;
            cin >> v;
            uf.parent[v] = uf.find(uf.parent[v]);
        } else if (type == '?') {
            int u, v;
            cin >> u >> v;
            results.push_back(uf.find(u));
        }
    }

    for (int res : results)
        cout << res << '\n';

    return 0;
}
