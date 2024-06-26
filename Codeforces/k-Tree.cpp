#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    int n, k, d;
    cin >> n >> k >> d;
    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, 0));
    dp[0][0] = 1;
    dp[0][1] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= min(i, k); j++)
        {
            if (j < d)
            {
                dp[i][0] = (dp[i][0] % mod + dp[i - j][0] % mod) % mod;
                dp[i][1] = (dp[i][1] % mod + dp[i - j][1] % mod) % mod;
            }
            if (j >= d)
            {
                dp[i][1] = (dp[i][1] % mod + dp[i - j][0] % mod) % mod;
                dp[i][1] = (dp[i][1] % mod + dp[i - j][1] % mod) % mod;
            }
        }
    }
    cout << dp[n][1];
}