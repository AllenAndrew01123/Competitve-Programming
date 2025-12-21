#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, q;
    cin >> n >> q;
    map<ll, vector<ll>> mp;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        mp[x].push_back(i);
    }
    while (q--)
    {
        ll k, l, r;
        cin >> k >> l >> r;
        vector<pair<ll, ll>> div;
        for (int i = 1; i * i <= k; i++)
        {
            if ((k % i == 0) && (mp.find(i) != mp.end()) && i != 1)
            {
                if (lower_bound(mp[i].begin(), mp[i].end(), l) != mp[i].end())
                {
                    ll idx = *lower_bound(mp[i].begin(), mp[i].end(), l);
                    if (idx <= r)
                        div.push_back(make_pair(idx, i));
                }
            }
            if ((k % (k / i) == 0) && mp.find(k / i) != mp.end())
            {
                if (lower_bound(mp[k/i].begin(), mp[k/i].end(), l) != mp[k/i].end())
                {
                    ll idx = *lower_bound(mp[k / i].begin(), mp[k / i].end(), l);
                    if (idx <= r)
                        div.push_back(make_pair(idx, k / i));
                }
            }
        }
        div.push_back(make_pair(l, -1e6));
        sort(div.begin(), div.end());
        div.push_back(make_pair(r + 1, 1));
        if (div.size() == 1)
        {
            cout << k * (r - l + 1) << endl;
        }
        else
        {
            ll temp = k;
            ll ans = 0;
            for (int i = 0; i < div.size() - 1; i++)
            {
                while (temp % (div[i].second) == 0)
                    temp /= div[i].second;
                ans += temp * (div[i + 1].first - div[i].first);
            }
            cout << ans << endl;
        }
    }
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