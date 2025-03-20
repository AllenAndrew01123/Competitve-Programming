#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    map<ll,ll>mp;
    for(int i=0;i<n;i++)
    {
        ll x=arr1[i];
        ll r=arr2[i];
        for(int j=x-r;j<=x+r;j++)
        {
            ll y=sqrt(r*r-(x-j)*(x-j));
            mp[j]=max(mp[j],y);
        }
    }
    ll ans=0;
    for(auto x:mp)
        ans+=(2*x.second+1);
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