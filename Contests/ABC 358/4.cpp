#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    multiset<ll> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll cost = 0;
    for (int i = 0; i < m; i++)
    {
        auto x = s.lower_bound(b[i]);
        if (x == s.end())
        {
            cout << -1 << endl;
            return;
        }
        cost += *x;
        s.erase(x);
    }
    cout << cost << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}