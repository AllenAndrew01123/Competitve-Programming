#include<bits/stdc++.h>
using namespace std;
main()
{
    // cin.tie(0)->sync_with_stdio(0);
    // int n,m;cin>>n>>m;
    // cout<<(n*m-1)/(m-1);
    int n,m;cin>>n>>m;
    int days=0;
    int socks=n;
    while(socks!=0)
    {
        days++;
        socks--;
        if(days%m==0)
        socks++;
    }
    cout<<days;
    
}