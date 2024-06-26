#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ll n, k;
    cin >> n >> k;
    ll dp[k + 1][n + 1] = {0};
    for (ll i = 1; i <= n; i++)
        dp[1][i] = 1;
    for (ll i = 2; i <= k; i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int z=j;z<=n;z+=j)
            {
                dp[i][j]=(dp[i][j]%mod + dp[i-1][z]%mod)%mod;
            }
        }
    }
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=(sum%mod + dp[k][i]%mod)%mod;
    }
   cout<<sum;
}