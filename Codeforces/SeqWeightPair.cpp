#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    map<ll,vector<ll>> mp;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        mp[x].push_back(i);
    }
    ll ans = 0;
    for (auto x : mp)
    {
        if(x.second.size()==1)
        continue;
        else
        {
            // for(int i=0;i<x.second)
        }

    }
    cout << ans << endl;
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