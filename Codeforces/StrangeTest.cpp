#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll a, b;
    cin >> a >> b;
    ll ans = b - a;
    for (ll i = a; i <= b; i++)
    {
        ll bnew = 0;
        for (ll j = 20; j >= 0; j--)
        {
            if ((b >> j) & 1)
                bnew ^= (1 << j);
            else
            {
                if ((i >> j) & 1)
                {
                    bnew ^= (1 << j);
                    break;
                }
            }
        }
        ans = min(ans, i - a + (i | bnew) - b + 1);
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