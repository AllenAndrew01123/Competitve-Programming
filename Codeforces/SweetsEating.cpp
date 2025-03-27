#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, m;
    cin >> n >> m;
    ll arr[n + 1];
    ll pref[n + 1] = {0};
    ll dp[n+1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    sort(arr + 1, arr + n + 1);
    for (int i = 1; i <= n; i++)
        pref[i] = pref[i - 1] + arr[i];
    for (int i = 1; i <= n; i++)
    {
        if(i<=m)
        dp[i]=pref[i];
        else
        {
            dp[i]=dp[i-m]+pref[i];
        }
        cout<<dp[i]<<" ";
    }

}
