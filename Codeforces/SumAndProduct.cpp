#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
bool IsPerfect(ll num)
{
    ll s = sqrt(num);
    return (s * s == num);
}
void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> mp;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        ll ans = 0;
        if (IsPerfect(x * x - 4 * y))
        {
            ll pos1 = (x + sqrt(x * x - 4 * y)) / 2;
            ll pos2 = (x - sqrt(x * x - 4 * y)) / 2;
            if(pos1!=pos2)
            ans+=mp[pos1]*mp[pos2];
            else
            ans+=(mp[pos1])*(mp[pos1]-1)/2;
        }
        cout << ans << " ";
    }
    cout << endl;
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