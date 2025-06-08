#include <bits/stdc++.h>
// #include <atcoder/math>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll x, y, p, q;
    cin >> x >> y >> p >> q;
    ll tmin = x;
    ll tmax = x + y;
    ll smin = p;
    ll smax = p + q;
    ll ans=LLONG_MAX;
    for (int i = tmin; i <= tmax; i++)
    {
        for (int j = smin; j <= smax; j++)
        {
            // // auto [t, lcm] = atcoder::crt({t1, t2}, {(X + Y) * 2, P + Q});
            // if (lcm == 0)
            //     continue;
            // if (ans > t)
            //     ans = t;
        }
    }
    if(ans==LLONG_MAX)
    cout<<"infinity\n";
    else
    cout<<ans<<endl;
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