#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, q;
    cin >> n >> q;
    ll arr[n + 1];
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    ll a[2 * n + 1];
    for (int i = 1; i <= n; i++)
        a[i] = arr[i];
    for (int i = n + 1; i <= 2 * n; i++)
        a[i] = arr[i - n];
    ll pref[2 * n + 1] = {0};
    for (int i = 1; i <= 2 * n; i++)
        pref[i] = pref[i - 1] + a[i];
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        ll ans1;
        ll ans2;
        ll rsum = (r / n) * sum;
        ll nst = (r / n);
        ll ex = r % n;
        ans1=rsum+ pref[ex + nst] - pref[nst];
        l--;
        ll lsum = (l / n) * sum;
        ll mst = (l / n);
        ex = l % n;
        ans2=lsum+ pref[ex + mst] - pref[mst];
        cout << ans1-ans2<< endl;
    }
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