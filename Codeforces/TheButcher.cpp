#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(pair<ll, ll> p, pair<ll, ll> q)
{
    if (p.first * p.second < q.first * q.second)
        return true;
    else
        return false;
}
void solve()
{
    int n;
    cin >> n;
    vector<pair<ll, ll>> v1(n), v2(n), ans;
    ll area = 0;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        area += a * b;
        v1[i] = {a, b};
        v2[i] = {b, a};
    }
    if (n == 1)
    {
        cout << 1 << endl;
        cout << v1[0].first << " " << v1[0].second << endl;
        return;
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    ll hlim = v1[n - 1].first;
    ll potw = v1[n - 1].second;
    for(int i=0;i<n;i++)
    {
        cout<<v1[i].first<<" "<<v1[i].second<<endl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<v2[i].first<<" "<<v2[i].second<<endl;
    }
    for (ll i = n - 2; i >= 0; i--)
    {
        potw += v1[i].second;
        if (v1[i].first != hlim)
            break;
    }
    if (hlim * potw == area)
        ans.push_back({hlim, potw});
    ll wlim = v2[n - 1].first;
    ll poth = v2[n - 1].second;
    for (ll i = n - 2; i >= 0; i--)
    {
        poth += v2[i].second;
        if (v2[i].first != wlim)
            break;
    }
    if (wlim * poth == area)
        ans.push_back({poth, wlim});
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
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
    return 0;
}