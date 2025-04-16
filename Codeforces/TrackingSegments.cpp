#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> v(m + 1);
    for (int i = 1; i <= m; i++)
        cin >> v[i].first >> v[i].second;
    ll q;
    cin >> q;
    vector<ll> queries(q + 1);
    for (int i = 1; i <= q; i++)
        cin >> queries[i];
    ll l = 1, r = q;
    ll ans = -1;
    while (l <= r)
    {
        ll mid = r - (r - l) / 2;
        ll arr[n + 1]={0};
        ll pref[n + 1] = {0};
        for (int i = 1; i <= mid; i++)
            arr[queries[i]] = 1;
        for (int i = 1; i <= n; i++)
            pref[i] = pref[i - 1] + arr[i];
        bool flag = false;
        for (int i = 1; i <= m; i++)
        {
            ll n1 = pref[v[i].second] - pref[v[i].first - 1];
            ll n0 = (v[i].second - v[i].first + 1) - n1;
            if (n1 > n0)
                flag = true;
        }
        if (flag)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
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