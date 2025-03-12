#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;cin>>n>>k;
    ll arr[n]={1};
    map<ll,pair<ll,ll>>mp;
    for(int i=0;i<k;i++)
    {
        ll l,r,x;cin>>l>>r>>x;
        mp[x]={min((mp[x].first),l),max(mp[x].second,r)};
    }
    if(mp.find(1)==mp.end())
    {
        for(auto x:arr)
        cout<<x<<" ";
        cout<<endl;
    }
    
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