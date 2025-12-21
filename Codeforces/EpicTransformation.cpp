#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    map<ll,ll> mp;
    ll mx=0;
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;
        mp[x]++;
        mx=max(mx,mp[x]);
    }
    if(n&1)
    {
        cout<<max(1LL,2*mx-n)<<endl;
        return;
    }
    else
    {
        cout<<max(0LL,2*mx-n)<<endl;
        return;
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}