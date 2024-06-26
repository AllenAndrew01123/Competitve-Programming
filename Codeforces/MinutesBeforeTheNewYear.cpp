#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        int h,m;cin>>h>>m;
        if(h==0 && m==0)
            cout<<"0\n";
        else
            cout<<(23-h)*60+(60-m)<<"\n";
    }

}