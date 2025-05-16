#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n + 1];
    ll diff[n + 1];
    ll add[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        diff[i] = arr[i] - i;
        add[i] = arr[i] + i;
    }
    ll mx1[n + 1];
    mx1[1] = add[1];
    ll mx2[n + 1];
    mx2[n] = diff[n];
    for (int i = 2; i <= n; i++)
        mx1[i] = max(mx1[i - 1], add[i]);
    for (int i = n - 1; i >= 1; i--)
        mx2[i] = max(mx2[i + 1], diff[i]);
    ll ans = LLONG_MIN;
    for (int i = 2; i <= n - 1; i++)
        ans = max(ans, arr[i] + mx1[i - 1] + mx2[i + 1]);
    cout << ans << endl;
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