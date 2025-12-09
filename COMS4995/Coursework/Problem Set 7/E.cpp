#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll k;
    cin >> k;
    ll left = 1, right = 2e18, ans = -1;
    while (left <= right)
    {
        ll mid = left + (right - left) / 2;
        ll n = mid - (ll)sqrtl(mid);
        if (n >= k)
        {
            ans = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    cout << ans << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
        solve();
}
