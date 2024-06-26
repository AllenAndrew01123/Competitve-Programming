#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll dp[n+1]={0};
    for(int i=n-1;i>=0;i--)
    {
        dp[i]=dp[i+1]+1;
        if(i+a[i]<=n)
        dp[i]=min(dp[i],dp[i+a[i]+1]);
    }
    cout<<dp[0]<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}