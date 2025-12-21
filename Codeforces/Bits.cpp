#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll l, r;
    cin >> l >> r;
    ll ans = l;
    for (int i = 0; i <= 62; i++)
    {
        if ((l >> i) & 1)
            continue;
        else
        {
            if (ans + (1LL << i) <= r)
            {
                ans += (1LL << i);
            }
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