#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int n=s.length();
    vector <int> dp(n+1,0);
    dp[0]=0;
    int cnt=0;
    int mx=0;
    for(int i=1;i<=n;i++)
    {
        if(s[i-1]=='(')
        cnt++;
        else
        cnt--;
        mx=max(mx,cnt);
        if(mx>cnt && cnt>=0)
        {
            dp[i]=dp[i-1]+1;
            if(cnt==0)
            mx=0;
        }
        else
        {
            dp[i]=dp[i-1];
            if(cnt<0)
            cnt=0;
        }
    }
    int m;cin>>m;
    while(m--)
    {
        int l,r;cin>>l>>r;
        if(dp[l]!=dp[l-1])
        cout<<(dp[r]-dp[l])*2<<endl;
        else
        cout<<(dp[r]-dp[l])*2-2<<endl;
    }
}