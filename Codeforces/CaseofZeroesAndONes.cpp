#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0);
    int n;cin>>n;
    int c0=0,c1=0;
    while(n--)
    {
        char t;cin>>t;
        if(t=='1')
        c1++;
        else
        c0++;
    }
    // cout<<c0<<" "<<c1<<endl;;
    cout<<c0+c1-2*min(c0,c1);
}