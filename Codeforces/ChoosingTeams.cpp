#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n,k;cin>>n>>k;
    int m,c=0;
    while(cin>>m)
    {
        if(k+m<=5)
        c++;
    }
    cout<<c/3;
}