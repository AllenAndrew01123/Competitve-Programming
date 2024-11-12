#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int q;
    cin >> q;
    vector<ll> ans;
    set<pair<ll, ll>> s1;
    set<ll> s2;
    map<ll, ll> mp;
    ll customer = 1;
    for (int i = 1; i <= q; i++)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            ll y;
            cin >> y;
            s1.insert({-y, customer});
            s2.insert(customer);
            mp[customer] = -y;
            customer++;
        }
        if (x == 2)
        {
            ans.push_back(*s2.begin());
            s1.erase({mp[*s2.begin()], *s2.begin()});
            s2.erase(*s2.begin());
        }
        if (x == 3)
        {
            ans.push_back(s1.begin()->second);
            s2.erase(s1.begin()->second);
            s1.erase(s1.begin());
        }
    }
    for (auto x : ans)
        cout << x << " ";
}