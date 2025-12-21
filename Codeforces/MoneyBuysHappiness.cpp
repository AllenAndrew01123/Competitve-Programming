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
    vector<pair<ll, ll>> v(n);
    ll area = 0;
    for (int i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        area += a * b;
        v[i] = {a, b};
    }
    if(n==1)
    {
        cout<<1<<endl;
        cout<<v[0].first<<" "<<v[0].second<<endl;
        return;
    }
    sort(v.begin(), v.end(), cmp);
    ll hlim = v[n - 1].first;
    ll wlim = v[n - 1].second;
    if (area % hlim == 0 && area % wlim == 0)
    {
        cout << 2 << endl;
        cout << hlim << " " << area / hlim << endl;
        cout << area / wlim << " " << wlim << endl;
        return;
    }
    else if (area % hlim == 0)
    {
        cout << 1 << endl;
        cout << hlim << " " << area / hlim << endl;
        return;
    }
    else
    {
        cout << 1 << endl;
        cout << area / wlim << " " << wlim << endl;
        return;
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