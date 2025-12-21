#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n + 1], dp[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        dp[i] = 1;
    }
    ll mx = LLONG_MIN;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (arr[i] % arr[j] == 0)
            {
                dp[i] = max(dp[i], dp[j] + 1);
                // mx = max(mx, dp[i]);
            }
        }
    }
    for(int i=1;i<=n;i++)
    mx=max(mx,dp[i]);
    cout<<mx<<endl;
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