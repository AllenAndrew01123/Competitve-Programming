#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll l, r;
    cin >> l >> r;
    vector<ll> exactg(r + 1, 0);
    for (int i = 2; i <= r; i++)
    {
        exactg[i] = r / i - (l + i - 1) / i + 1;
        exactg[i] *= exactg[i];
    }
    for (int i = r / 2; i >= 2; i--)
    {
        for (int j = 2 * i; j <= r; j += i)
            exactg[i] -= exactg[j];
    }
    ll ans = 0;
    for (int i = 2; i <= r; i++)
    {
        if (i >= l)
        {
            ll mul = r / i - (l + i - 1) / i + 1;
            exactg[i]-=2*mul-1;
        }
        ans+=exactg[i];
    }
    cout<<ans<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}