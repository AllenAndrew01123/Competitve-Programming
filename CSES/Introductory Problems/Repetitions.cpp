#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string s;cin>>s;
    ll dp[s.length()];
    dp[0]=1;
    ll mx=1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
        dp[i]=dp[i-1]+1;
        else
        dp[i]=1;
        mx=max(mx,dp[i]);
    }
    cout<<mx<<endl;
}