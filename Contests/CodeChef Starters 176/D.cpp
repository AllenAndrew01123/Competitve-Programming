#include <bits/stdc++.h>

using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> ans;
    ans.push_back(n);
    for (ll i = 62; i >= 0; i--)
    {
        if ((n >> i) & 1LL)
        {
            continue;
        }
        else
        {
            ll c = 1LL << i;
            if (n <= m - c)
            {
                ans.push_back(n + c);
            }
        }
    }
    if (ans.size() == 1)
    {
        cout << -1 << endl;
        return;
    }
    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << " ";
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