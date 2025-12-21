#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    vector<pair<ll, ll>> v;
    vector<ll>en;
    for(int i=0;i<n;i++)
    {
        ll a,b;cin>>a>>b;
        v.push_back({a,b});
        en.push_back(b);
    }
    sort(v.begin(),v.end());
    sort(en.begin(),en.end());
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        auto pos=lower_bound(en.begin(),en.end(),v[i].second);
        ans+=pos-en.begin();
        en.erase(pos);
    }
    cout<<ans<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}