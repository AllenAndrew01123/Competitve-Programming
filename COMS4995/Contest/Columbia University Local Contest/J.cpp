#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll sum(ll a)
{
    ll sum = 0;
    while (a > 0)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}
ll prod(ll a)
{
    ll prod = 1;
    while (a > 0)
    {
        prod *= a % 10;
        a /= 10;
    }
    return prod;
}
void solve()
{
    ll x;
    cin >> x;
    vector<ll> primes;
    vector<bool> sieve(10001, true);
    for (int i = 2; i <= 10000; i++)
    {
        if (sieve[i])
        {
            primes.push_back(i);
            for (int j = 2 * i; j <= 10000; j += i)
                sieve[j] = false;
        }
    }
    ll n = primes.size();
    vector<pair<ll, ll>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (primes[i] < x && primes[j] < x)
            {
                if (sum(primes[i]) == prod(primes[j]))
                    ans.push_back({primes[i], primes[j]});
            }
        }
    }
    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x.first << " " << x.second << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}