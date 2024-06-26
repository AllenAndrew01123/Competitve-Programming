#include<bits/stdc++.h>
using namespace std;
main()
{
    string s;cin>>s;
    int dp[s.length()];
    dp[0]=0;
    int j=1;
    for(;j<s.length();j++)
    {
        if(s[j]==s[j-1])
        dp[j]=1+dp[j-1];
        else
        dp[j]=dp[j-1];
    }
    int m;cin>>m;
    while(m--)
    {
        int l,r;cin>>l>>r;
        cout<<dp[r-1]-dp[l-1]<<endl;
    }
}