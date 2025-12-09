#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll ans = 3 * (n / (a + b + c));
    n %= a + b + c;
    if (n == 0)
        cout << ans << endl;
    else if (a >= n)
        cout << ans + 1 << endl;
    else if (a + b >= n)
        cout << ans + 2 << endl;
    else
        cout << ans + 3 << endl;
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