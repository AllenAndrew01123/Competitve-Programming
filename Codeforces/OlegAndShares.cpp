#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll mn = *min_element(v.begin(), v.end());
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (((v[i] - mn) % k) != 0)
        {
            cout << -1 << endl;
            return;
        }
        ans += (v[i] - mn) / k;
    }
    cout << ans << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}
