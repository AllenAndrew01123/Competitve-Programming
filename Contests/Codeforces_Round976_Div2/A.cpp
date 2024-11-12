#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout << n << endl;
        return;
    }
    ll ans = 0;
    while (n > 0)
    {
        if (n < k)
        {
            ans += n;
            cout<<ans<<endl;
            return;
        }
        ll ex = 1;
        while (ex*k<=n)
            ex *= k;
        ans++;
        n -= ex;
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