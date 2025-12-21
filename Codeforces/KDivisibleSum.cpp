#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        double n,k;cin>>n>>k;
        long long h=n;
        long long i=k;
        if(h%i==0)
        cout<<1<<endl;
        else if(k>=n)
        cout<<fixed<<setprecision(0)<<ceil(k/n)<<endl;
        else 
        {
            cout<<2<<endl;
        }
    }
}