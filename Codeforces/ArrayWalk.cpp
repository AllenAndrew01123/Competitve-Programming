#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,k,z;cin>>n>>k>>z;
    ll a[n+1]={0};
    ll pref[n+1]={0};
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        pref[i]=pref[i-1]+a[i];
    }
    ll maxtwo[n+1]={0};
    ll mx=0;
    for(int i=1;i<n;i++)
    {
        maxtwo[i]=max({mx,a[i]+a[i-1],a[i]+a[i+1]});
        mx=maxtwo[i];
    }
    ll ans=pref[k+1];
    // cout<<ans<<endl;
    ll l=1;
    for(int i=k-1;i>0 && l<=z;i-=2,l++)
    {
        ans=max(ans,pref[i]+l*(maxtwo[i]));
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