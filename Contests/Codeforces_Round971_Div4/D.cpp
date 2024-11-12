#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    set<ll> d, u;
    while (n--)
    {
        ll x, y;
        cin >> x >> y;
        if (y == 0)
            d.insert(x);
        else
            u.insert(x);
    }
    ll ans = 0;
    for (auto x : d)
    {
        if (u.find(x) != u.end())
            ans += d.size() - 1;
        if (u.find(x + 1) != u.end() && u.find(x - 1) != u.end())
            ans++;
    }
    for (auto x : u)
    {
        if (d.find(x) != d.end())
            ans += u.size() - 1;
        if (d.find(x + 1) != d.end() && d.find(x - 1) != d.end())
            ans++;
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