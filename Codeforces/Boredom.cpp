#include <bits/stdc++.h>
#define int long long
using namespace std;
int dp[1000000];
signed main()
{
    int n;cin>>n;
    int a[n+1];
    dp[0]=0;
    int sum1=0;
    map<int,int> mp;
    int mx=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        int s;cin>>s;
        mp[s]++;
        mx=max(mx,s);
    }
    dp[1]=mp[1];
    for(int i=2;i<=mx;i++)
    dp[i]=max(dp[i-1],dp[i-2]+i*mp[i]);

    cout<<dp[mx];

}