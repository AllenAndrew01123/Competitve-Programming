#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> arr1(n), ans;
    set<pair<ll, ll>> arr2;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr1[i] = {x, i};
        arr2.insert({x, i});
    }
    for (int i = 0; i < n; i++)
    {
        if (arr1[i].second == (*(arr2.begin())).second)
        {
            arr2.erase(arr2.begin());
            continue;
        }
        else
        {
            ll idx = (*(arr2.begin())).second;
            ans.push_back({idx, arr1[i].second});
            ans.push_back({arr1[i].second, idx});
            ans.push_back({idx, arr1[i].second});
            arr1[idx].first = arr1[i].first;
            arr2.erase(arr2.begin());
            arr2.insert({arr1[i].first, idx});
            arr2.erase(arr2.lower_bound({arr1[i].first, -1}));
        }
    }
    cout << ans.size() << endl;
    for (auto x : ans)
    {
        cout << x.first + 1 << " " << x.second + 1 << endl;
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