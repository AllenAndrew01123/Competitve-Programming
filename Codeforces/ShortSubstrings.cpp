#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i=1;
        cout<<s[0];
        for(;i<s.length()-1;i=i+2)
        cout<<s[i];
        cout<<s[s.length()-1]<<endl;;
    }
}