#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll mod;
    cin >> mod;
    ll fact[n + 1];
    fact[0] = 1;
    for (ll i = 1; i <= n; i++)
        fact[i] = ((fact[i - 1] % mod) * i) % mod;
    ll ans = (n % mod * fact[n] % mod) % mod;
    ll mul = 2;
    ll end = n - 2;
    while (end >= 0)
    {
        ans = ((ans % mod) + ((fact[mul] % mod * (end + 1) % mod) % mod * ((end + 1) % mod * fact[end] % mod) % mod) % mod)%mod;
        end--;
        mul++;
    }
    cout << ans << endl;
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