#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;cin>>t;
    while(t--)
    {
        long long x,y;cin>>x>>y;
        long long a,b;cin>>a>>b;
        long long ans;
        if(2*a<b)
        ans=a*(x+y);
        else
        ans=b*(min(x,y))+a*abs(x-y);
        cout<<ans<<endl;
    }
}