#include<bits/stdc++.h>
using namespace std;
main()
{
    string s;cin>>s;
    string temp=s;
    int i=0;
    while(i<s.length())
    {
        if(s[i]>='5'&& s[i]<='9')
        s[i]='9'-s[i]+48;
        i++;
    }
    i=0;
    if(s[i]=='0')
    cout<<9<<s.substr(1,s.length());
    else
    cout<<s;
}