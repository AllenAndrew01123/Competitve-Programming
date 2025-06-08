#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
bool isValid(ll row, ll col, ll n, ll m, char c)
{
    if (row >= 0 && row <= n - 1 && col >= 0 && col <= m - 1 && c != 'T')
        return true;
    return false;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> adj(n*m, vector<ll>());
    char grid[n][m];
    vector<ll> nigs;
    ll st, en;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'E')
                en = i * m + j;
            else if (grid[i][j] == 'S')
                st = i * m + j;
            else if (grid[i][j] != '0' && grid[i][j] != 'T')
                nigs.push_back(i * m + j);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'T')
                continue;
            if (isValid(i + 1, j, n, m, grid[i + 1][j]))
                adj[i * m + j].push_back((i + 1) * m + j);
            if (isValid(i - 1, j, n, m, grid[i - 1][j]))
                adj[i * m + j].push_back((i - 1) * m + j);
            if (isValid(i, j + 1, n, m, grid[i][j + 1]))
                adj[i * m + j].push_back(i * m + j + 1);
            if (isValid(i, j - 1, n, m, grid[i][j - 1]))
                adj[i * m + j].push_back(i * m + j - 1);
        }
    }
    queue<ll> q;
    vector<bool> used(n*m);
    vector<ll> d(n*m, LLONG_MAX);
    q.push(en);
    used[en] = true;
    while (!q.empty())
    {
        ll v = q.front();
        q.pop();
        for (ll u : adj[v])
        {
            if (!used[u])
            {
                used[u] = true;
                q.push(u);
                d[u] = d[v] + 1;
            }
        }
    }
    ll ans = 0;
    for (auto x : nigs)
    {
        if (d[x] <= d[st])
        {
            ans += (grid[x / m][x % m]-48);
        }
    }
    cout << ans << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}