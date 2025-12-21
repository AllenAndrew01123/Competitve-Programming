#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    ll a[n + 1];
    ll b[n + 1];
    ll score = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
        score += a[i] * b[i];
    }
    ll dp[n+1][n+1]={0};
    ll mx=0;
    for(int l=n;l>=1;l--)
    {
        for(int r=l+1;r<=n;r++)
        {
            dp[l][r]=dp[l+1][r-1]+a[l]*(b[r]-b[l])+a[r]*(b[l]-b[r]);
            mx=max(mx,dp[l][r]);
        }
    }
    cout<<score+mx<<endl;
}