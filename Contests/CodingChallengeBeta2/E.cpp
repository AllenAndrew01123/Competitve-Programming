#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> a(n+1);
    vector<ll> b(n),c(n);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a.begin(),a.end());
    ll bmax=0,cmax=0;
    ll left=1;
    ll ans=0;
    for(ll right=1;right<=n;right++)
    {
        
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