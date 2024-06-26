#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    int arr1[n + 1];
    int arr2[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr1[i];
    for (int i = 1; i <= n; i++)
        cin >> arr2[i];
    vector<vector<int>> dp(n + 1, vector<int>(2, 0));
    dp[1][1] = arr1[1];
    dp[1][0] = arr2[1];
    for (int i = 2; i <= n; i++)
    {
        dp[i][0] = max(dp[i - 2][1] + arr2[i], dp[i - 1][1] + arr2[i]);
        dp[i][1] = max(dp[i - 2][0] + arr1[i], dp[i - 1][0] + arr1[i]);
    }
    cout<<max(dp[n][0],dp[n][1]);
}