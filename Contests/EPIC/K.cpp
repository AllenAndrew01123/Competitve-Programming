#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
int dp[101][101];

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<long long>> dp(n + 1, vector<long long>(m + 1));
    dp[0][0] = 1;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= min(i, m); ++j)
        {
            dp[i][j] = (dp[i - 1][j] * 1LL * (j - 1) + dp[i - 1][j - 1] * 1LL * j) % MOD;
        }
    }

    cout << dp[n][m] << endl;
    return 0;
}
