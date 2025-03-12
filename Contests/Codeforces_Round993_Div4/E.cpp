#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    ll pow = 1;
    ll ans = 0;
    while (pow<=r2/l1)
    {
        ll lower = max(l1,(l2+pow-1)/pow);
        ll upper = min(r1, r2/pow);
        if(upper>=lower)
        ans += (upper - lower)+1;
        pow*=k;
        if(pow>r2)
        break;
    }
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