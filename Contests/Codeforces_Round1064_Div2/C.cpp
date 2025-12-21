#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define N 200000
typedef long long ll;
vector<ll> parent(N), sz(N);
void make_set(ll n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        sz[i] = 1;
    }
}
ll find_set(ll x)
{
    if (parent[x] != x)
        parent[x] = find_set(parent[x]);
    return parent[x];
}
void uni(ll x, ll y)
{
    ll x_root = find_set(x);
    ll y_root = find_set(y);
    if (x_root == y_root)
        return;
    if (sz[x_root] < sz[y_root])
        swap(x_root, y_root);
    parent[y_root] = x_root;
    sz[x_root] += sz[y_root];
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    vector<pair<ll, pair<ll, ll>>> edges(n);
    for (int i = 1; i < n; ++i)
    {
        ll w = max(a[i], a[i + 1]);
        edges[i - 1] = {w, {i, i + 1}};
    }
    edges[n - 1] = {max(a[n], a[1]), {n, 1}};
    sort(edges.begin(), edges.end());
    make_set(n);
    ll ans = 0;
    int used = 0;
    for (auto &e : edges)
    {
        ll w = e.first;
        ll u = e.second.first;
        ll v = e.second.second;
        if (find_set(u) != find_set(v))
        {
            uni(u, v);
            ans += w;
            used++;
            if (used == n - 1)
                break;
        }
    }
    cout << ans << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}