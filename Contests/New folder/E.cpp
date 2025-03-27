#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<ll> primes;
void calc()
{
    vector<ll> v(1e7, 1);
    for (int i = 2; i < 10000000; i++)
    {
        if (v[i])
        {
            primes.push_back(i);
            for (int j = i; j < 10000000; j += i)
                v[j] = 0;
        }
    }
}
void solve()
{

    ll n;
    cin >> n;
    ll ans = 0;
    for (auto x : primes)
    {
        if(x>n)
        break;
        ans += n / x;
    }
    cout << ans << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    calc();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}