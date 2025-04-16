#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n + 1), dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
    {
        if ((i - (v[i] + 1)) >= 0 && dp[i - v[i] - 1])
            dp[i] = 1;
        if ((i + v[i]) <= n && dp[i - 1])
            dp[i + v[i]] = 1;
    }
    if (dp[n])
        cout << "YES\n";
    else
        cout << "NO\n";
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