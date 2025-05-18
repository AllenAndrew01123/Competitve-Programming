#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef int ll;
void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> pref(201, vector<ll>(n + 1, 0));
    vector<vector<ll>> mp(201);
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        pref[x][i] = 1;
        mp[x].push_back(i);
    }
    for (int i = 1; i <= 200; i++)
    {
        for (int j = 1; j <= n; j++)
            pref[i][j] += pref[i][j - 1];
    }
    for (int i = 1; i <= 200; i++)
    {
        ans = max(ans, (ll)mp[i].size());
        ll mx = mp[i].size();
        for (int bl = 1; bl <= mx / 2; bl++)
        {
            ll left = mp[i][bl - 1] + 1;
            ll right = mp[i][mx - bl] - 1;
            for (int j = 1; j <= 200; j++)
                ans = max(ans, pref[j][right] - pref[j][left - 1] + 2 * bl);
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