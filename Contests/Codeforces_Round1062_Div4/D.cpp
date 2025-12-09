#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<ll> primes;
#define N 1000
void sieve()
{
    vector<ll> arr(N + 1, 1);
    for (int i = 2; i <= N; i++)
    {
        if (arr[i])
        {
            primes.push_back(i);
            for (int j = 2 * i; j <= N; j += i)
                arr[j] = 0;
        }
    }
}
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for(auto x:primes)
    {
        for(int i=0;i<n;i++)
        {
            if(__gcd(x,arr[i])==1)
            {
                cout<<x<<endl;
                return;
            }
        }
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}