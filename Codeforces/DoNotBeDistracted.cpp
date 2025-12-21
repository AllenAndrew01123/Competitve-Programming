#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        string s;int n;
        cin>>n>>s;
        s.erase(unique(s.begin(),s.end()),s.end());
        int x=s.length();
        sort(s.begin(),s.end());
        s.erase(unique(s.begin(),s.end()),s.end());
        int y=s.length();
        if(x==y)
        cout<<"YES\n";
        else
        cout<<"NO\n";


    }
}