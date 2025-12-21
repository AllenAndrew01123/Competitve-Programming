#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        int c0=0,c1=0;
        // char c;
        string s;cin>>s;
        int i=0;
        while(i<s.length())
        {
            if(s[i]=='0')
            c0++;
            else
            c1++;
            i++;
        }
        if(min(c0,c1)%2==0)
        cout<<"NET\n";
        else
        cout<<"DA\n";
    }
}