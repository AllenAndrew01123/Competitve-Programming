#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    ll left = 1, right = n;
    ll ans=1;
    while (left <= right)
    {
        ll mid = (left + right) / 2;
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if ((cnt<=v[i].second) && (mid-v[i].first-1<=cnt))
                cnt++;
        }
        if (cnt >= mid)
        {
            ans = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
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