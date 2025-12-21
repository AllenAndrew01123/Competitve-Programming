#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll mx = LLONG_MAX;
    ll ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (mx == 0)
            continue;
        if (arr[i] < mx)
        {
            ans += arr[i];
            mx = arr[i];
        }
        else
        {
            ans += mx - 1;
            mx -= 1;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}