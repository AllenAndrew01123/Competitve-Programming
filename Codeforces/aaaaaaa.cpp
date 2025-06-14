#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 2000
#define mod 1000000007
ll fact[N + 1], inv[N + 1];
ll binpow(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll res = binpow(a, b / 2);
    if (b % 2)
        return ((((res % mod) * (res % mod)) % mod) * (a % mod)) % mod;
    else
        return ((res % mod) * (res % mod)) % mod;
}
void calc()
{
    fact[0] = 1;
    inv[0] = 1;
    for (ll i = 1; i <= N; i++)
    {
        fact[i] = ((fact[i - 1] % mod) * i) % mod;
        inv[i] = binpow(fact[i], mod - 2) % mod;
    }
}
ll nCr(ll n, ll r)
{
    if (n == 0 || n == r || r == 0)
        return 1;
    return ((((fact[n] % mod) % mod * (inv[r] % mod) % mod) % mod) * inv[n - r] % mod) % mod;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    cout << nCr(n + m - 1, n) << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    calc();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
