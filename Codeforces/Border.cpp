#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll g = k;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        g = __gcd(g, x % k);
    }
    vector<ll> ans;
    for (ll d = 0; d < k; d += g)
        ans.push_back(d);
    cout << ans.size() << '\n';
    for (ll d : ans)
        cout << d << ' ';
    cout << endl;
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