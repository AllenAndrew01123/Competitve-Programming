#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
#define N 50001
vector<ll> parent(N), sz(N);
void make_set(ll n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        sz[i]++;
    }
}
ll find(ll x)
{
    if (parent[x] != x)
        parent[x] = find(parent[x]);
    return parent[x];
}
void uni(ll x, ll y)
{
    ll x_root = find(x);
    ll y_root = find(y);
    if (x_root == y_root)
        return;
    if (sz[x_root] < sz[y_root])
        swap(x_root, y_root);
    parent[y_root] = x_root;
    sz[x_root] += sz[y_root];
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, m, k;
    cin >> n >> m >> k;
    make_set(n);
    set<pair<int, int>> edges;
    for (int i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        edges.insert({u, v});
        edges.insert({v, u});
    }
    vector<string> v(k);
    vector<pair<int, int>> op(k);
    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
        cin >> op[i].first >> op[i].second;
        if (v[i] == "cut")
        {
            edges.erase({op[i].first, op[i].second});
            edges.erase({op[i].second, op[i].first});
        }
    }
    for (auto x : edges)
    {
        cout << x.first << " " << x.second << endl;
        uni(x.first, x.second);
    }
    vector<string> ans;
    for (int i = k - 1; i >= 0; i--)
    {
        if (v[i] == "ask")
        {
            if (find(op[i].first) == find(op[i].second))
                ans.push_back("YES");
            else
                ans.push_back("NO");
        }
        else
            uni(op[i].first, op[i].second);
    }
    reverse(ans.begin(), ans.end());
    for (auto x : ans)
        cout << x << endl;
}