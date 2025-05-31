#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n + 1, n);
    while (m--)
    {
        ll x, y;
        cin >> x >> y;
        v[min(x, y)] = min(v[min(x, y)], max(x, y) - 1);
    }
    ll mn = v[n];
    for (int i = n - 1; i >= 1; i--)
    {
        mn = min(mn, v[i]);
        v[i] = mn;
    }
    ll ans = n;
    for (int i = 1; i <= n; i++)
        ans += v[i] - i;
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