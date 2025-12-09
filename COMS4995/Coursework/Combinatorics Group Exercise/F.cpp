#include <bits/stdc++.h>
using namespace std;
#define mod 998244353
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    set<ll> unmarked;
    map<ll, ll> mp;
    ll arr1[n + 1];
    ll arr2[k + 1];
    for (int i = 1; i <= n; i++)
        unmarked.insert(i);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr1[i];
        mp[arr1[i]] = i;
    }
    for (int i = 1; i <= k; i++)
    {
        cin >> arr2[i];
        unmarked.erase(mp[arr2[i]]);
    }
    ll ans = 1;
    for (int i = 1; i <= k; i++)
    {
        ll idx = mp[arr2[i]];
        if (idx == 1)
        {
            if (unmarked.find(idx + 1) == unmarked.end())
            {
                cout << 0 << endl;
                return;
            }
        }
        else if (idx == n)
        {
            if (unmarked.find(idx - 1) == unmarked.end())
            {
                cout << 0 << endl;
                return;
            }
        }
        else
        {
            ll c = 0;
            if (unmarked.find(idx - 1) != unmarked.end())
                c++;
            if (unmarked.find(idx + 1) != unmarked.end())
                c++;
            if (c == 0)
            {
                cout << 0 << endl;
                return;
            }
            ans = (ans % mod * c % mod) % mod;
        }
        unmarked.insert(idx);
    }
    cout<<ans<<endl;
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