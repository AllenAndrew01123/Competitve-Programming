#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, a;
    cin >> n >> a;
    ll t[n + 1];
    ll ans[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> t[i];
    ans[1] = t[1] + a;
    for (int i = 2; i <= n; i++)
    {
        ans[i] = max(ans[i - 1] + a, t[i] + a);
    }
    for (int i = 1; i <= n; i++)
        cout << ans[i] << endl;
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