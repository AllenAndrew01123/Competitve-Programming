#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
#define N 200001
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
    ll num=1;
    for(int i=1;i<=r;i++)
    num=((num%mod)*((n-r+i)%mod))%mod;
    return ((num%mod)*(inv[r]%mod))%mod;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    calc();
    ll n, a, b;
    cin >> n >> a >> b;
    ll total=(binpow(2,n)-1+mod)%mod;
    total=(total-nCr(n,a)+mod)%mod;
    total=(total-nCr(n,b)+mod)%mod;
    cout<<total<<endl;
}