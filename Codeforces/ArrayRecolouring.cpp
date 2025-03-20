#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll ans = v[0] + v[n - 1];
    if (k == 1)
    {
        for (int i = 1; i < n - 1; i++)
            ans = max(ans, v[i] + max(v[0], v[n - 1]));
        cout<<ans<<endl;
        return;
    }
    sort(v.begin(), v.end(), greater<int>());
    cout << (ll)accumulate(v.begin(), v.begin() + k + 1, 0LL) << endl;
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