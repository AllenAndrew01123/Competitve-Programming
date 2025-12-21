#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n <= 2)
    {
        cout << -1 << endl;
        return;
    }
    sort(a.begin(), a.end());
    ll sum = accumulate(a.begin(), a.end(), 0LL);
    ll ans = max(0LL, 2 * n * a[n / 2] - sum + 1);
    cout << ans << endl;
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}
