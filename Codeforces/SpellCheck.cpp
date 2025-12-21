#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string temp="Timru";
        // if(n!=5)
        // { 
        //     cout<<"NO\n";
        //     continue;
        // }
        string s;cin>>s;
        sort(s.begin(),s.end());
        if(s==temp)
        cout<<"YES\n";
        else
        cout<<"NO\n";


    }
}