#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int x;cin>>x;
    long long y=0;
    while(x>0)
    {
        if(x%2!=0)y++;
        x/=2;
    }
    cout<<y;
    
}