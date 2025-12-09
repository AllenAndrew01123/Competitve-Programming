#include <bits/stdc++.h>
using namespace std;
#define mod 998244353
typedef long long ll;
ll modpow(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll res = modpow(a, b / 2);
    if (b % 2)
        return ((((res % mod) * (res % mod)) % mod) * (a % mod)) % mod;
    else
        return ((res % mod) * (res % mod)) % mod;
}

void solve(){
    ll n, k;
    cin >> n >> k;         
    ll num = modpow((2 * k) % mod, 2*k);
    ll den = modpow((2 * k + 1) % mod, 2*k); 
    ll invden = modpow(den, mod - 2);  
    ll ans = ( (n % mod) * (num%mod) ) % mod;
    ans = ( ans * (invden%mod) ) % mod;
    cout << ans << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}
