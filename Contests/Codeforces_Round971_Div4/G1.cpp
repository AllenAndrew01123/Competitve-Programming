#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
    ll arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    map<ll, ll> ans, mp;
    multiset<ll> s;
    for (int i = 1; i <= k; i++)
        mp[arr[i] - i]++;
    for (auto x : mp)
        s.insert(x.second);
    ans[1] = k - *s.rbegin();
    for (int i = 2; i <= n - k + 1; i++)
    {
        ll remove = arr[i - 1] - (i - 1);
        s.erase(s.lower_bound(mp[remove]));
        s.insert(mp[remove] - 1);
        mp[remove]--;
        ll add = arr[i + k - 1] - (i + k - 1);
        if (mp.find(add) != mp.end())
        {
            s.erase(s.lower_bound(mp[add]));
            s.insert(mp[add] + 1);
            mp[add]++;
        }
        else
        {
            mp[add]++;
            s.insert(1);
        }
        ans[i] = k - *s.rbegin();
    }
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        cout << ans[l] << endl;
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