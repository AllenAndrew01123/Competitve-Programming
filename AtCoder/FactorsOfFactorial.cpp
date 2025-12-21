#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<ll> spf(100001);
void precal()
{
    for (int i = 1; i <= 100000; i++)
        spf[i] = i;
    for (int i = 2; i <= 100000; i++)
    {
        if (spf[i] == i)
        {
            for (int j = 2 * i; j <= 100000; j += i)
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
        while (temp != 1)
        {
            mp[spf[temp]]++;
            temp /= spf[temp];
        }
    }
    ll ans = 1;
    for (auto x : mp)
        ans = ((ans % mod) * ((x.second + 1) % mod)) % mod;
    cout << ans << endl;
}