#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<ll> spf(101);
void precal()
{
    for (int i = 1; i <= 100; i++)
        spf[i] = i;
    for (int i = 2; i <= 100; i++)
    {
        if (spf[i] == i)
        {
            for (int j = 2 * i; j <= 100; j += i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    precal();
    ll n;
    cin >> n;
    map<ll, ll> mp;
    for (int i = 2; i <= n; i++)
    {
        ll temp = i;
        while (spf[temp] != 1)
        {
            mp[spf[temp]]++;
            temp /= spf[temp];
        }
    }
    ll ans = 0;
    vector<ll> primes;
    for (auto x : mp)
        primes.push_back(x.second);
    for (int i = 0; i < primes.size(); i++)
    {
        if (primes[i] >= 74)
            ans++;
    }
    for (int i = 0; i < primes.size(); i++)
    {
        for (int j = i + 1; j < primes.size(); j++)
        {
            if (primes[i] >= 2 && primes[j] >= 24)
                ans++;
            if (primes[i] >= 24 && primes[j] >= 2)
                ans++;
            if (primes[i] >= 4 && primes[j] >= 14)
                ans++;
            if (primes[i] >= 14 && primes[j] >= 4)
                ans++;
        }
    }
    for (int i = 0; i < primes.size(); i++)
    {
        for (int j = i + 1; j < primes.size(); j++)
        {
            for (int z = j + 1; z < primes.size(); z++)
            {
                if (primes[i] >= 2 && primes[j] >= 4 && primes[z] >= 4)
                    ans++;
                if (primes[i] >= 4 && primes[j] >= 2 && primes[z] >= 4)
                    ans++;
                if (primes[i] >= 4 && primes[j] >= 4 && primes[z] >= 2)
                    ans++;
            }
        }
    }
    cout << ans << endl;
}