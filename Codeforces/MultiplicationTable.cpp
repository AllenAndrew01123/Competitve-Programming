#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    long long n,x;cin>>n>>x;
    long long i=1,c=0;
    for(;i<=n;i++)
    {
        if(x%i==0 && x/i<=n)
        {
            c++;
            // cout<<i<<endl;
        }
    }
    cout<<c;
}