#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    ll m;
    cin >> m;
    map<ll, pair<ll, ll>> mp;
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == arr2[i])
        {
            mp[arr1[i]].first += 2;
            mp[arr1[i]].second++;
        }
        else
        {
            mp[arr1[i]].first++;
            mp[arr2[i]].first++;
        }
    }
    ll ans = 1;
    for (auto x : mp)
    {
        ll ways = 1;
        for (int i = 1; i <= x.second.first; i++)
        {
            ll t = i;
            while (x.second.second > 0 && t % 2 == 0)
            {
                t /= 2;
                x.second.second--;
            }
            ways = (ways % m) * (t % m);
            ways = ways % m;
        }
        ans = (ans % m) * (ways % m);
        ans = ans % m;
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