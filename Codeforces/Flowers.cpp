#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<ll> dp(100001, 0);
vector<ll> pref(100001, 0);
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll t;
    cin >> t;
    ll k;
    cin >> k;
    for (int i = 1; i < k; i++)
        dp[i] = 1;
    dp[k] = 2;
    for (int i = k + 1; i <= 100000; i++)
        dp[i] = (dp[i - 1] % mod + dp[i - 1 - (k - 1)] % mod) % mod;
    for (int i = 1; i <= 100000; i++)
        pref[i] = (pref[i - 1]%mod + dp[i]%mod)%mod;
    while(t--)
    {
        ll a,b;cin>>a>>b;
        cout<<(mod+(pref[b]-pref[a-1])%mod)%mod<<endl;
    }
}