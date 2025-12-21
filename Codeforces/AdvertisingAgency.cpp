#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
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
ll factorial(ll num)
{
    ll ans = 1;
    for (int i = 1; i <= num; i++)
    {
        ans =((ans%mod)* (i % mod))%mod;
    }
    return ans;
}
ll nCr(ll n, ll r)
{
    if (n == 0 || n == r || n < r || r == 0)
        return 1;
    return ((((factorial(n) % mod) % mod * (binpow(factorial(r), mod - 2) % mod) % mod) % mod) * binpow(factorial(n - r), mod - 2) % mod) % mod;
}
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll temp = k;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[-x]++;
    }
    vector<ll> v;
    for (auto x : mp)
    {
        v.push_back(x.second);
    }
    ll idx = 0;
    while (temp > 0)
    {
        if (temp >= v[idx])
        {
            temp -= v[idx];
            idx++;
        }
        else
            break;
    }
    ll num = v[idx];
    ll deno = temp;
    cout << nCr(num, deno) << endl;
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