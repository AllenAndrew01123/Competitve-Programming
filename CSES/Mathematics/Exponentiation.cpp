#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll binpow(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll x = binpow(a, b / 2);
    if (b & 1)
        return ((((x % mod) * (x % mod)) % mod) * (a % mod)) % mod;
    else
        return (((x % mod) * (x % mod)) % mod) % mod;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        cout << binpow(a, b) << endl;
    }
}