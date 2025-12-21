#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
void solve()
{
    long long n;cin>>n;
    // cout<<n<<endl;
    map <long long,long long> mp;
    set <long long> b;
    long long c=0;
    for(long long i=0;i<n;i++)
    {
        long long a;cin>>a;
        mp[a]++;
        if(mp[a]==2)
        c++;
        if(mp[a]>2)
        {
            cout<<"0"<<endl;
            return;
        }
        b.insert(a);
    }
    // cout<<b.size()<<endl;
    // cout<<c<<endl;
    // cout<<mp[*b.rbegin()]<<endl;
    if(mp[*b.rbegin()]!=1)
    {
        cout<<"0"<<endl;
        return;
    }
    c=b.size()-c-1;
    long long i=1;
    for(;i<=c;i++)
    {
        i=i*2%mod;
    }
    cout<<i<<endl;
    return;

}
main()
{
    freopen("file_name.in", "r", stdin);
    freopen("file_name.out", "w", stdout);

    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}