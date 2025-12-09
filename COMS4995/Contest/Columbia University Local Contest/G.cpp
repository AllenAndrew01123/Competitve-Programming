#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll binpow(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll res = binpow(a, b / 2);
    if (b % 2)
        return ((((res % mod) * (res % mod)) % mod) * (a % mod)) % mod;
    else
        return ((res % mod) * (res % mod)) % mod;
}
void solve()
{
    ll n;
    cin >> n;
    ll dp[10][n + 1];
    dp[0][1] = 0;
    for (int i = 1; i <= 9; i++)
        dp[i][1] = 1;
    for (int len = 2; len <= n; len++)
    {
        dp[0][len] = dp[1][len - 1];
        dp[9][len] = dp[8][len - 1];
        for (int i = 1; i <= 8; i++)
        {
            dp[i][len]=((dp[i-1][len-1])%mod+(dp[i+1][len-1])%mod)%mod;
        }
    }
    ll ans=0;
    for(int i=0;i<=9;i++)
    ans=((ans)%mod+(dp[i][n])%mod)%mod;
    cout<<ans<<endl;
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