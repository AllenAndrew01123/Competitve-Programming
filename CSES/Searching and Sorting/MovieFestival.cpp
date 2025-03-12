#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].second >> v[i].first;
    sort(v.begin(), v.end());
    ll ans = 1;
    ll end = v[0].first, start = v[0].second;
    for (auto x : v)
    {
        if (x.second >= end)
        {
            ans++;
            end = x.first;
            start = x.second;
        }
    }
    cout << ans << endl;
}