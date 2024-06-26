#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;cin>>t;
    while(t--)
    {
        double a,b;cin>>a>>b;
        double c=(a*b-1)/(a-1);
        long long d=(long long)c;
        cout<<d<<endl;
    }
}