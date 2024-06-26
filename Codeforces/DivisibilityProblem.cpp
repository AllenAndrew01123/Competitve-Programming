#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
       int a,b;
       cin>>a>>b;
       if(a<=b) cout<<(b-a)<<"\n";
       else if(a%b!=0)cout<<(b-(a%b))<<"\n";
       else cout<<"0"<<"\n";

    }
}