#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll w, d, h;
    cin >> w >> d >> h;
    ll a, b;
    cin >> a >> b;
    ll f, g;
    cin >> f >> g;
    ll ans =min({b + abs(a - f) + g,a + abs(b - g) + f,(d - b) + abs(a - f) + (d - g),(w - a) + abs(b - g) + (w - f)}) ;
    cout << ans + h << endl;
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
