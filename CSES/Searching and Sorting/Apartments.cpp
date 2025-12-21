#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, m, k;
    cin >> n >> m >> k;
    multiset<ll> s1, s2;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s1.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        s2.insert(x);
    }
    ll cnt = 0;
    for (auto x : s1)
    {
        if (s2.lower_bound(x - k) == s2.end())
            continue;
        ll num = *s2.lower_bound(x - k);
        if (num <= x + k)
        {
            cnt++;
            s2.erase(s2.lower_bound(num));
        }
    }
    cout << cnt << endl;
}