#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    map<ll,ll>mpx,mpy;
    vector<pair<ll,ll>>v;
    for(int i=0;i<n;i++)
    {
        ll x,y;cin>>x>>y;
        mpx[x]++;
        mpy[y]++;
        v.push_back({x,y});
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=(mpx[v[i].first]-1)*(mpy[v[i].second]-1);
    }
    cout<<ans<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    t=1;
    while(t--)
    {
        solve();
    }
}