#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
    int n;cin>>n;
    long long dp[n+1];
    dp[1]=0;
    dp[2]=3;
    long long odd=1;
    for(int i=3;i<=n;i++)
    {
        int flag=(i&1?-3:3);
        dp[i]=((dp[i-1]*3)%mod+flag%mod)%mod;
    }
    cout<<dp[n];
}