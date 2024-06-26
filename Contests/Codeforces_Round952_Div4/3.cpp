#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll a[n + 1];
    ll pref[n + 1];
    ll mx[n + 1];
    ll j = 0;
    pref[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
        j = max(a[i], j);
        mx[i] = j;
    }
    ll cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if ( pref[i] - mx[i] == mx[i])
            cnt++;
    }
    cout<<cnt<<endl;
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