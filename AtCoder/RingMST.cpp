#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,m;cin>>n>>m;
    vector<pair<ll,ll>>v(m);
    ll g=n;
    for(int i=0;i<m;i++)
    {
        cin>>v[i].second>>v[i].first;
        g=__gcd(g,v[i].second);
    }
    if(g>1)
    {
        cout<<-1<<endl;
        return;
    }
    sort(v.begin(),v.end());
    g=n;
    ll ans=0;
    for(int i=0;i<m && g!=1;i++)
    {
        ll gnew=__gcd(g,v[i].second);
        if(gnew<g)
        {
            ans+=(g-gnew)*v[i].first;
            g=gnew;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    while (t--)
    {
        solve();
    }
}