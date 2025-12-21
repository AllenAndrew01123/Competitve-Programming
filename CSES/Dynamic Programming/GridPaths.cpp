#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    vector<vector<char>> a(n + 1, vector<char>(n + 1));
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    if (a[1][1] == '*' || a[n][n] == '*')
    {
        cout << 0 << endl;
        return 0;
    }
    bool check = true;
    ;
    for (int j = 1; j <= n; j++)
    {
        if (a[1][j] != '*' && check)
            dp[1][j] = 1;
        else
        {
            check = false;
        }
    }
    check = true;
    for (int i = 1; i <= n; i++)
    {
        if (a[i][1] != '*' && check)
            dp[i][1] = 1;
        else
            check = false;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= n; j++)
        {
            if (a[i][j] != '*')
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
            else
                dp[i][j] = 0;
        }
    }
    cout << dp[n][n] << endl;
}