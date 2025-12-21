#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        ll x;cin>>x;
        v[i]=make_pair(x,i);
    }
    sort(v.begin(),v.end());
    ll ans=1;
    for(int i=0;i<n-1;i++)
    {
        if(v[i].second>v[i+1].second)
        ans++;
    }
    cout<<ans<<endl;
}