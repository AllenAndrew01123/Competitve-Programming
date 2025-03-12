#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    ll ans = 1;
    for (int i = 1; i <= n; i++)
        ans = ((ans % mod) * (2 % mod)) % mod;
    cout << ans << endl;
}