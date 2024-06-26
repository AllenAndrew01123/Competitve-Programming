#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s1,s2;cin>>s1>>s2;
    if(s1.compare(s2)>0)
    {
        int i;
        for(i=0;i<s1.length();i++)
        {
            if(s1[i]>s2[i])
            break;
        }
        i++;
        for(;i<s1.length();i++)
        {
            if(s1[i]>s2[i])
            swap(s1[i],s2[i]);
        }
        cout<<s1<<endl<<s2<<endl;
    }
    else
    {
        string temp=s1;
        s1=s2;
        s2=temp;
        int i;
        for(i=0;i<s1.length();i++)
        {
            if(s1[i]>s2[i])
            break;
        }
        i++;
        for(;i<s1.length();i++)
        {
            if(s1[i]>s2[i])
            swap(s1[i],s2[i]);
        }
        cout<<s1<<endl<<s2<<endl;
    }
}
main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}