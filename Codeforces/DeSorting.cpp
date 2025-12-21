#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (!is_sorted(v.begin(), v.end()))
    {
        cout << 0 << endl;
        return;
    }
    ll mn = LLONG_MAX;
    for (int i = 0; i < n - 1; i++)
        mn = min(mn, v[i + 1] - v[i]);
    cout << mn / 2 + 1 << endl;
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