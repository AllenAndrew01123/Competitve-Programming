#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        ll t, s;
        cin >> t >> s;
        v[i] = {t, s};
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    ll j = 1;
    while (j < n && ((v[j].first - v[0].first) <= k))
    {
        ans = max(ans, v[j].second + v[0].second + v[j].first - v[0].first);
        j++;
    }
    for (int i = 1; i < n; i++)
    {
        if ((v[i].second - v[i - 1].second > v[i].first - v[i - 1].first))
            ans += v[i].second - v[i - 1].second - v[i].first + v[i - 1].first;
        while (j < n && (v[j].first - v[i].first <= k))
        {
            if (j == i)
            {
                j++;
                continue;
            }
            ans = max(ans, v[j].second + v[i].second + v[j].first - v[i].first);
            j++;
        }
    }
    cout << ans << endl;
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