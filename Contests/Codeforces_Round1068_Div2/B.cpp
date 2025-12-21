#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    vector<ll> dp1(n), dp2(n);
    dp1[0] = min(-a[0], b[0]);
    dp2[0] = max(-a[0], b[0]);
    for (int i = 1; i < n; i++)
    {
        ll red_min = dp1[i - 1] - a[i];
        ll red_max = dp2[i - 1] - a[i];
        ll blue_min = b[i] - dp2[i - 1];
        ll blue_max = b[i] - dp1[i - 1];
        dp1[i] = min(red_min, blue_min);
        dp2[i] = max(red_max, blue_max);
    }
    cout << dp2[n-1] <<endl;
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
