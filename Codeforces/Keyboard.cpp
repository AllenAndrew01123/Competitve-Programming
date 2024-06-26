#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    char c;cin>>c;
    string s;cin>>s;
    string s1="qwertyuiop";
    string s2="asdfghjkl;";
    string s3="zxcvbnm,./";
    if(c=='R')
    {
        int i;
        for(i=0;i<s.length();i++)
        {
            char temp=s[i];
            int q1=s1.find(temp);
            int q2=s2.find(temp);
            int q3=s3.find(temp);
            if(q1!=string::npos)
            {
                cout<<s1[q1-1];
                continue;
            }
            if(q2!=string::npos)
            {
                cout<<s2[q2-1];
                continue;
            }
            if(q3!=string::npos)
            {
                cout<<s3[q3-1];
                continue;
            }
        }
    }
    else
    {
        int i;
        for(i=0;i<s.length();i++)
        {
            char temp=s[i];
            int q1=s1.find(temp);
            int q2=s2.find(temp);
            int q3=s3.find(temp);
            if(q1!=string::npos)
            {
                cout<<s1[q1+1];
                continue;
            }
            if(q2!=string::npos)
            {
                cout<<s2[q2+1];
                continue;
            }
            if(q3!=string::npos)
            {
                cout<<s3[q3+1];
                continue;
            }
        } 
    }

}