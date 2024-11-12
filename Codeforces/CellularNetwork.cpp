#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, m;
    cin >> n >> m;
    set<ll> cities, cn;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        cities.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        cn.insert(x);
    }
    ll l = 0, r = 1e10;
    ll ans = r;
    while (l <= r)
    {
        ll mid = r - (r - l) / 2;
        bool flag = true;
        for (auto x : cities)
        {
            ll llim = x - mid;
            ll ulim = x + mid;
            if (*cn.lower_bound(llim) <= ulim)
                continue;
            else
                flag = false;
        }
        if (flag)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;
}