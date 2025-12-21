#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }
    vector<ll> v;
    for (auto x : mp)
        v.push_back(x.second);
    sort(v.begin(),v.end());
    ll cnt=0;
    for(int i=0;i<v.size();i++)
    {
        if(k>=v[i])
        {
            k-=v[i];
            cnt++;
        }
    }
    cout<<max(1LL,v.size()-cnt)<<endl;
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