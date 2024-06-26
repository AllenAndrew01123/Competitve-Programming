#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;cin>>n;
    long long a[n];
    map<long long,long long>mp;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]=a[i]-i;
        mp[a[i]]++;
    }
    long long ans=0;
    for(auto x:mp)
    {
        long long y=x.second;
        ans+=y*(y-1)/2;
    }
    cout<<ans<<endl;
    return;
}
main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}