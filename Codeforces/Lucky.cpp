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
        int sum1=s[0]+s[1]+s[2];
        int sum2=s[3]+s[4]+s[5];
        if(sum1==sum2)
        cout<<"YES\n";
        else cout<<"NO\n";

    }
}