#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> pos(n + 1);
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        pos[x] = i;
    }
    if (is_sorted(pos.begin() + 1, pos.end()))
    {
        cout << 0 << endl;
        return;
    }
    ll l = (n + 1) / 2, r = (n + 2) / 2;
    ll ans = n / 2;
    while (l > 0)
    {
        if (l == r)
        {
            l--;
            r++;
            continue;
        }
        if ((pos[l] < pos[l + 1]) && (pos[r - 1] < pos[r]))
        {
            ans--;
            l--;
            r++;
        }
        else
            break;
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