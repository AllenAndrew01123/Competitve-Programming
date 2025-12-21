#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, k;
    cin >> n >> k;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % k == 0)
            continue;
        mp[x % k]++;
    }
    ll mx = -1;
    for (auto x : mp)
    {
        mx = max(mx,(k- x.first) + (x.second - 1) * k);
    }
    cout << mx +1<< endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}