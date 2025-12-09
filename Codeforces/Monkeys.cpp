#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
#define N 200001
vector<ll> parent(N), sz(N), falltime(N);
vector<vector<int>> members(N);
vector<bool> connected(N);
void make_set(ll n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        sz[i]++;
        connected[i] = (i == 1);
        members[i].push_back(i);
        falltime[i] = -1;
    }
}
ll find(ll x)
{
    if (parent[x] != x)
        parent[x] = find(parent[x]);
    return parent[x];
}
void uni(ll x, ll y, ll time, ll m)
{
    ll rx = find(x), ry = find(y);
    if (rx == ry) return;
    bool ca = connected[rx], cb = connected[ry];
    if (sz[rx] < sz[ry])
    {
        swap(rx, ry);
        swap(ca, cb);
    }
    if (time < m && ca != cb)
    {
        int fallen = ca ? ry : rx;
        for (int u : members[fallen])
            falltime[u] = time;
    }
    parent[ry] = rx;
    sz[rx] += sz[ry];
    connected[rx] = ca || cb;
    for (int u : members[ry])
        members[rx].push_back(u);
    members[ry].clear();
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, m;
    cin >> n >> m;
    const int INF = m;
    make_set(n);
    vector<vector<ll>> edges;
    vector<ll> edgeL(n + 1, -1), edgeR(n + 1, -1);
    for (int i = 1; i <= n; i++)
    {
        ll x, y;
        cin >> x >> y;
        if (x != -1)
        {
            edgeL[i] = edges.size();
            edges.push_back({i, x, INF});
        }
        if (y != -1)
        {
            edgeR[i] = edges.size();
            edges.push_back({i, y, INF});
        }
    }
    vector<int> eventEdge(m);
    for (int t = 0; t < m; t++)
    {
        ll p, h;
        cin >> p >> h;
        ll id = (h == 1 ? edgeL[p] : edgeR[p]);
        eventEdge[t] = id;
        edges[id][2] = t;
    }
    for (auto &e : edges)
    {
        if (e[2] >= m)
            uni(e[0], e[1], m, m);
    }
    for (int t = m - 1; t >= 0; t--)
    {
        auto &e = edges[eventEdge[t]];
        uni(e[0], e[1], t, m);
    }
    for (int i = 1; i <= n; i++)
        cout << falltime[i] << "\n";
}