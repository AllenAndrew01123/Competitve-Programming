#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
main()
{
    cin.tie(0)->sync_with_stdio(0);
    long long n;
    cin >> n;
    vector <long long> dp(n+1,0);
    dp[0] = 1;
    for (long long i = 1; i <= n; i++)
    {
        for(long long j=1;j<=6 && i-j>=0;j++)
        {
            dp[i]=(dp[i]+dp[i-j])%mod;
        }
    }
    cout << dp[n];
}