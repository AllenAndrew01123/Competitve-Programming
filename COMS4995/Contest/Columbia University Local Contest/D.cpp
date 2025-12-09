#include <bits/stdc++.h>
using namespace std;
#define mod 998244353
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= n; i++)
        dp[i] = ((dp[i - dp[i - 1]])%mod + (dp[i - dp[i - 2]]%mod))%mod;
    cout<<dp[n]<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}