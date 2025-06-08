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
    if (r > n)
        return 0;
    if (n == 0 || n == r || r == 0)
        return 1;
    return ((((fact[n] % mod) % mod * (inv[r] % mod) % mod) % mod) * inv[n - r] % mod) % mod;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v(m);
    for (int i = 0; i < m; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    vector<ll> diff;
    diff.push_back(v[0] - 1);
    for (int i = 1; i < m; i++)
    {
        diff.push_back(v[i] - v[i - 1] - 1);
    }
    diff.push_back(n-v[m-1]);
    ll sum = accumulate(diff.begin(), diff.end(), 0LL);
    ll ans = 1;
    ans = ((ans % mod) * (fact[sum] % mod)) % mod;
    for (auto d : diff)
        ans = ((ans % mod) * (inv[d] % mod)) % mod;
    for (int i = 1; i < diff.size() - 1; i++)
        ans = ((ans % mod) * (binpow(2, max(diff[i] - 1, 0LL)) % mod)) % mod;
    cout << ans << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    calc();
    int t = 1;
    while (t--)
    {
        solve();
    }
}
