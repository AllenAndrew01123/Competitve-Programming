#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll a[n + 1];
    ll dp1[n + 1], dp2[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    dp1[0] = dp2[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        dp1[i]=max({abs(dp1[i-1]+a[i]),dp1[i-1]+a[i],dp2[i-1]+a[i],abs(dp2[i-1]+a[i])}),
        dp2[i]=min({abs(dp1[i-1]+a[i]),dp1[i-1]+a[i],dp2[i-1]+a[i],abs(dp2[i-1]+a[i])});
    }
    // for (ll x : dp)
    // {
    //     cout << x << " ";
    // }
    cout << max(abs(dp1[n]),abs(dp2[n])) << endl;
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
