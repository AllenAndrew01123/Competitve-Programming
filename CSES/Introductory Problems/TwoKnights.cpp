#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll t;
    cin >> t;
    for (ll n = 0; n < t; n++)
    {
        ll ans = ((n * n * n * n) / 2) + (2 * n * n * n) - ((3 * n * n / 2)) + 5 * n;
        cout << ans << endl;
    }
}