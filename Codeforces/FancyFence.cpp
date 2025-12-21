#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;cin>>t;
    while(t--)
    {
        double a;cin>>a;
        double c=360/(180-a);
        if(floor(c)==ceil(c))
        cout<<"YES\n";
        else
        cout<<"NO\n";

    }
}