#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[k + 1];
    ll temp[k + 1];
    ll ans[n + 1] = {0};
    map<ll, ll> mp;
    for (int i = 1; i <= k; i++)
        cin >> a[i];
    for (int i = 1; i <= k; i++)
        cin >> temp[i];
    for (int i = 1; i <= k; i++)
        mp[a[i]] = temp[i];
    multiset<ll> s1, s2;
    for (int i = 1; i <= k; i++)
        s1.insert(temp[i] + a[i]);
    for (int i = 1; i <= n; i++)
    {
        if (s2.empty())
        {
            ans[i] = *(s1.begin()) - i;
        }
        else if (s1.empty())
        {
            ans[i] = *s2.begin() + i;
        }
        else
            ans[i] = min((*s1.begin() - i), (*s2.begin() + i));
        if (mp.find(i) != mp.end())
        {
            s1.erase(s1.lower_bound(i + mp[i]));
            s2.insert(mp[i] - i);
        }
    }
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
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