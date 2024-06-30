#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    ll a[n+1];
    ll pref[n+1];
    pref[0]=0;
    for(int i=1;i<=n;i++)
    {
        char c;cin>>c;
        a[i]=c-48;
        pref[i]=pref[i-1]+a[i];
    }
    map<ll,ll> mp;
    for(int i=0;i<=n;i++)
    {
        mp[pref[i]-i]++;
    }
    ll ans=0;
    for(auto x:mp)
    {
        ans+=(x.second)*(x.second-1)/2;
    }
    cout<<ans<<endl;
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