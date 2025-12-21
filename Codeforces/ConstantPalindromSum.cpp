#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    ll diff[2 * k + 2] = {0};
    ll pref[2 * k + 1] = {0};
    map<ll, ll> mp;
    for (int i = 1; i <= n / 2; i++)
    {
        mp[arr[i] + arr[n - i + 1]]++;
        diff[min(arr[i], arr[n - i + 1]) + 1]++;
        diff[max(arr[i], arr[n - i + 1]) + k + 1]--;
    }
    for (int i = 1; i <= 2 * k; i++)
        pref[i] = pref[i - 1] + diff[i];
    ll ans = LLONG_MAX;
    for (int i = 2; i <= 2 * k; i++)
        ans = min(ans, n - pref[i] - mp[i]);
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