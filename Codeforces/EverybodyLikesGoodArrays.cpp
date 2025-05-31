#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    ll odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x & 1)
        {
            odd++;
            ans += max(0LL, even - 1);
            even = 0;
        }
        else
        {
            even++;
            ans += max(0LL, odd - 1);
            odd = 0;
        }
    }
    ans += max(0LL, odd - 1);
    ans += max(0LL, even - 1);
    cout << ans << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}