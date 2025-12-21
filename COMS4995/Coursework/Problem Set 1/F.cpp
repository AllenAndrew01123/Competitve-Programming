#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n+1), b(n+1);
    ll sum = 0;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        ans += a[i] * a[i];
        sum+=a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
        ans += b[i] * b[i];
        sum+=b[i];
    }
    vector<vector<bool>>dp(n+1,vector<bool>(10001,false));
    dp[0][0]=true;
    for(int i=1;i<=n;i++)
    {
        for(int s=0;s<=10000;s++)
        {
            if(dp[i-1][s])
            {
                dp[i][s+a[i]]=true;
                dp[i][s+b[i]]=true;
            }
        }
    }
    ll mn=LLONG_MAX;
    for(int s=0;s<=10000;s++)
    {
        if(dp[n][s])
        mn=min(mn,s*s+(sum-s)*(sum-s));
    }
    cout << (n-2)*ans+mn << endl;
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