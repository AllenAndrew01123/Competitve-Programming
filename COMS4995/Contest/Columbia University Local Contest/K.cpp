#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> arr[i][j];
    }
    vector<vector<map<ll,ll>>> ans(n+1,vector<map<ll,ll>>(m+1));
    ans[1][1][arr[1][1]]++;;
    for (int j = 2; j <= m; j++)
    {
        for (auto x : ans[1][j - 1])
            ans[1][j][x + arr[1][j]]++;
    }
    for (int i = 2; i <= n; i++)
    {
        for (auto x : ans[i - 1][1])
            ans[i][1][x + arr[i][1]];
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= m; j++)
        {
            for (auto x : ans[i - 1][j])
                ans[i][j].push_back(x + arr[i][j]);
            for (auto x : ans[i][j - 1])
                ans[i][j].push_back(x + arr[i][j]);
        }
    }
    cout<<count(ans[n][m].begin(),ans[n][m].end(),0)<<endl;
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