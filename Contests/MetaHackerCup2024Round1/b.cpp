#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<ll> p(1e8, 1);
vector<ll> primes, primenew;
void eos()
{
    for (int i = 2; i < 1e7; i++)
    {
        if (!p[i])
            continue;
        primes.push_back(i);
        for (int j = 2 * i; j < 1e7; j += i)
            p[j] = 0;
    }
}
void solve()
{
    ll n;
    cin >> n;
    ll cnt = 0;
    if (n <= 4)
        cout << 0;
    else
    {
        for (int i = 0; i < primes.size() - 1; i++)
        {
            if (primes[i] <= n && primes[i + 1] <= n && (primes[i+1]-primes[i]<=2))
                cnt++;
        }
        cout << cnt ;
    }
}
int main()
{
    eos();
    cin.tie(0)->sync_with_stdio(0);
    freopen("prime_subtractorization_input.txt", "r", stdin);
    freopen("file_name.out", "w", stdout);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case #" << i << ": ";
        solve();
        cout << endl;
    }
}