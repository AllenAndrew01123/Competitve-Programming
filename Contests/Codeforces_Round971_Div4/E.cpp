#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll sum = n * k + n * (n - 1) / 2;
    ll l = 1, r = n;
    ll ans = LLONG_MAX;
    while (l <= r)
    {
        ll mid = r - (r - l) / 2;
        ll lsum = mid * k + mid * (mid - 1) / 2;
        ll rsum = sum - lsum;
        ans = min(ans, abs(lsum - rsum));
        if (lsum < rsum)
            l = mid + 1;
        else
            r = mid - 1;
    }
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