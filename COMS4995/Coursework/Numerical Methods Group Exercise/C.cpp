#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n+1);
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        ll c, t;
        cin >> c >> t;
        arr[i] = arr[i - 1] + c * t;
    }
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        cout << lower_bound(arr.begin(),arr.end(),x)-arr.begin()<<endl;
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}