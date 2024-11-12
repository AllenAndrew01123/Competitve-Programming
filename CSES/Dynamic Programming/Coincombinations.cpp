#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n,x;cin>>n>>x;
    vector <int> a(n);
    vector <int> dp(x+1,0);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    dp[0]=1;
    for(int i=1;i<=x;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]<=i)
            dp[i]=(dp[i]+dp[i-a[j]])%mod;
        }
    }
    cout<<dp[x];
}