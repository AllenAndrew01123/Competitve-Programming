#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    {
        double a,b;cin>>a>>b;
        int x=ceil(abs(a-b)/10);
        cout<<x<<endl;
    }
}