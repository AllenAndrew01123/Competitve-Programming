#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> k(n), h(n);
    ll ans = 0;
    for (int i = 0; i < n; i++)
        cin >> k[i];
    for (int i = 0; i < n; i++)
        cin >> h[i];
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
        v.push_back(make_pair(k[i] - h[i], k[i]));
    sort(v.begin(), v.end());
    ll l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i].first >= r)
        {
            ll len = r - l;
            ans += len * (len + 1) / 2;
            l = v[i].first;
            r = v[i].second;
        }
        else
        {
            r = max(r, v[i].second);
        }
    }
    ll len = r-l;
    ans += len * (len + 1) / 2;
    cout << ans<< endl;
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