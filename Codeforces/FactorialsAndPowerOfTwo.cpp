#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<ll> factorial(12);
void calc()
{
    ll fact = 2;
    for (int i = 3; i <= 14; i++)
    {
        fact *= i;
        factorial[i - 3] = fact;
    }
}
void solve()
{
    ll n;
    cin >> n;
    ll ans = INT_MAX;
    for (int i = 0; i < (1 << 12); i++)
    {
        ll sum = 0;
        ll cnt = 0;
        for (int j = 11; j >= 0; j--)
        {
            if ((i >> j) & 1)
            {
                sum += factorial[j];
                cnt++;
            }
        }
        if (sum > n)
            continue;
        else
        {
            ll cnt2 = 0;
            ll x = n - sum;
            for (int j = 40; j >= 0; j--)
            {
                if ((x >> j) & 1)
                {
                    cnt2++;
                }
            }
            ans = min(ans, cnt + cnt2);
        }
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