#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> mp;
    map<ll, ll> mp2;
    ll ans= n;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
        mp2[mp[x]]++;
        ans = min(ans, n - mp[x] * mp2[mp[x]]);
    }
    std::cout << ans << endl;
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