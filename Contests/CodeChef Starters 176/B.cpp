#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    ll ans = 0;
    if (a <= x)
        ans += a;
    else
    {
        if (a <= x + y)
        {
            ans += a;
            y -= (a - x);
        }
        else if (a <= x + y + z)
        {
            ans += a;
            z -= (a - y - x);
            y = 0;
        }
        else
        {
            cout << ans + x + y + z << endl;
            return;
        }
    }
    if (b <= y)
        ans += b;
    else
    {
        if (b <= y + z)
        {
            ans += b;
            z -= (b - y);
        }
        else
        {
            cout << ans + y + z << endl;
            return;
        }
    }
    if (c <= z)
        ans += c;
    else
    {
        cout << ans + z << endl;
        return;
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