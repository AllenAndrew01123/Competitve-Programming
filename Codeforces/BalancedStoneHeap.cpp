#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
bool check(vector<ll> &v, ll mid)
{
    ll s = v.size();
    vector<ll> arr(s, 0);
    for (int i = s - 1; i >= 2; i--)
    {
        if (v[i] + arr[i] < mid)
            return false;
        else
        {
            ll d;
            if (arr[i] >= mid)
                d = v[i] / 3;
            else
                d = (v[i] - (mid - arr[i])) / 3;
            arr[i - 1] += d;
            arr[i - 2] += 2 * d;
        }
    }
    if (v[1] + arr[1] >= mid && v[0] + arr[0] >= mid)
        return true;
    return false;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll l = *min_element(v.begin(), v.end()), r = *max_element(v.begin(), v.end());
    ll ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (check(v, mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
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