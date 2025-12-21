#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll calc(ll lim, ll lcm, ll b)
{
    if (lim < b)
        return 0;
    ll cnt = (lim + 1 - b) / lcm;
    ll excess = max(0ll, lim - (lcm * (cnt + 1)) + 1);
    return lim + 1 - ((cnt + 1) * b) - excess;
}
void solve()
{
    ll a, b, q;
    cin >> a >> b >> q;
    if (a > b)
        swap(a, b);
    ll lcm = a * b / __gcd(a, b);
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        if (lcm == b)
            cout << 0 << " ";
        else
            cout << calc(r, lcm, b) - calc(l - 1, lcm, b) << " ";
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