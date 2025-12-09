#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
bool check(vector<vector<ll>> &adj, vector<ll> &arr, ll node, ll val)
{
    if (val > 1e10)
        return false;
    bool leafNode = true;
    if (node != 1)
        val += max(0LL, val - arr[node]);
    for (auto child : adj[node])
    {
        leafNode = false;
        if (!check(adj, arr, child, val))
            return false;
    }
    return (!leafNode || val <= arr[node]);
}
void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> adj(n + 1);
    vector<ll> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int i = 2; i <= n; i++)
    {
        ll x;
        cin >> x;
        adj[x].push_back(i);
    }
    ll left = 0, right = 1e10;
    ll ans;
    while (left <= right)
    {
        ll mid = right - (right - left) / 2;
        if (check(adj, arr, 1, mid))
        {
            ans = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    cout << ans+arr[1] << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    cout<<(-7)/(-2)<<endl;
    while (t--)
    {
        solve();
    }
}