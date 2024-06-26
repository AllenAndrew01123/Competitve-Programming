#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    string s;cin>>s;
    if(s[0]>=97 && s[0]<=123)
    {
        // cout<<1<<endl;
        int i=1;
        for(;i<s.length();i++)
        {
            if(s[i]>=65 && s[i]<=91)
            continue;
            else
            break;
        }
        if(i==s.length())
        {
            transform(s.begin(),s.end(),s.begin(),::tolower);
            s[0]=s[0]-32;
        }
    }
    else
    {
        // cout<<2<<endl;
        int i=1;
        for(;i<s.length();i++)
        {
            if(s[i]>=65 && s[i]<=91)
            continue;
            else
            break;
        }
        if(i==s.length())

        {
            transform(s.begin(),s.end(),s.begin(),::tolower);
        }
    }
    cout<<s;
}