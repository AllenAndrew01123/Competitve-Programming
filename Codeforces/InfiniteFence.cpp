#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll a, b, k;
    cin >> a >> b >> k;
    ll g = __gcd(a, b);
    if (b < a)
        swap(a, b);
    if (((b - g + a - 1) / a) >= k)
        cout << "REBEL\n";
    else
        cout << "OBEY\n";
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