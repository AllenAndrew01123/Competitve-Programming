#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll l, r;
    cin >> l >> r;
    ll bit1, bit2;
    ll ans = 0;
    for (ll i = 63; i >= 0; i--)
    {
        if ((r >> i) & 1)
        {
            bit1 = i;
            break;
        }
    }
    for (ll i = 63; i >= 0; i--)
    {
        if ((l >> i) & 1)
        {
            bit2 = i;
            break;
        }
    }
    for (ll i = bit1; i > bit2; i--)
        ans += (1LL << i);
    for (int i = bit2; i >= 0; i--)
    {
        if ((r >> i) ^ (l >> i))
            ans += (1LL << i);
        else
        {
            if (r - l >= (1LL << i))
                ans += (1LL << i);
        }
    }
    cout << ans << endl;
}