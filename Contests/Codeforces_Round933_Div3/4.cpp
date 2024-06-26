#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> dp(m + 1, vector<int>(n , 0));
    dp[0][k-1] = 1;
    for (int j = 1; j <= m; j++)
    {
        int r;
        char c;
        cin >> r >> c;
        for (int i = 0; i < n; i++)
        {
            int clock = (i + r) % n;
            int anticlock = (i + n - r) % n;
            if (c == '0' && dp[j - 1][i] == 1)
                dp[j][clock] = 1;
            else if (c == '1' && dp[j - 1][i] == 1)
                dp[j][anticlock] = 1;
            else if (c == '?' && dp[j - 1][i] == 1)
            {
                dp[j][clock] = 1;
                dp[j][anticlock] = 1;
            }
        }
    }
    int ans=0;
    set<int>b;
    for(int i=0;i<n;i++)
    {
        if(dp[m][i]==1)
        {
        ans++;
        b.insert(i+1);
        }
    }
    cout<<ans<<endl;
    for(auto x:b)
    cout<<x<<" ";
    cout<<endl;
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