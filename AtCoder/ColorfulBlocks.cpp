#include<bits/stdc++.h>
using namespace std;
#define mod 998244353
typedef long long ll;
#define N 200000
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
    ll n,m,k;cin>>n>>m>>k;
    ll ans=0;
    for(int i=0;i<=k;i++)
    {
        ans=ans%mod+(((nCr(n-1,i)%mod)*((binpow(m-1,n-i-1))%mod))%mod*(m%mod))%mod;
        ans=ans%mod;
    }
    cout<<ans<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    calc();
    int t=1;
    while(t--)
    {
        solve();
    }

}