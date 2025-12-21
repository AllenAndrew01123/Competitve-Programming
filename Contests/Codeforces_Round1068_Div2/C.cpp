#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    ll n, k;
    cin >> n >> k;
    map<ll, set<ll>> mp;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        for (int j = 1; j * j <= x; j++)
        {
            if (x % j == 0)
            {
                mp[j].insert(x);
                mp[x / j].insert(x);
            }
        }
    }
    vector<bool> v(2e5 + 1, false);
    for (auto x : mp)
    {
        // cout << x.first << " " << x.second.size() << endl;
        if (x.second.size() == (k / x.first))
            v[x.first] = true;
    }
    vector<ll> ans;
    for (int i = 1; i <= 2e5; i++)
    {
        if (v[i])
        {
            ans.push_back(i);
            for (int j = 2 * i; j <= 2e5; j += i)
                v[j] = false;
        }
    }
    if (ans.size() == -1)
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
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
