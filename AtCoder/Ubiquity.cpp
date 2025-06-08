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
void solve()
{
    ll n;
    cin>>n;
    ll a=(binpow(10,n)%mod+binpow(8,n)%mod)%mod;
    ll b=(binpow(9,n)%mod+binpow(9,n)%mod)%mod;
    cout<<(a-b+mod)%mod<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}