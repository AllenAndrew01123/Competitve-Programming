#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        long long n;cin>>n;
        long long i=n/2;
        double ans=0;
        for(double j=1;j<=i;j++)
        {
            ans+=j*(8*j);
        }
        cout<<fixed<<setprecision(0)<<ans<<endl;
    }
}