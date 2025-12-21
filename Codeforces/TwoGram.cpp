#include<bits/stdc++.h>
using namespace std;
int frq(string sub,string s)
{
    int j=0,c=0;
    for(;j<s.length()-1;j++)
    {
        if(s.substr(j,2)==sub)
        c++;
    }
    return c;
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;cin>>n;
    string s;cin>>s;
    string sub,ans;
    int m=0;
    for(int i=0;i<s.length()-1;i++)
    {
        sub=s.substr(i,2);
        int c=frq(sub,s);
        // cout<<sub<<c<<endl;
        if(c>m)
        {
            ans=sub;
            m=c;
        }

    }
    cout<<ans;
}