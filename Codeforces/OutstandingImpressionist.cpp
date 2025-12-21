#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    set<ll> s;
    map<ll, ll> mp;
    vector<pair<ll, ll>> v(n);
    for(int i=1;i<=2*n;i++)
    {
        s.insert(i);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        if (v[i].first == v[i].second)
        {
            s.erase(v[i].first);
            mp[v[i].first]++;
        }
    }
    string str;
    for (int i = 0; i < n; i++)
    {
        if (v[i].first == v[i].second)
        {
            if (mp[v[i].first] == 1)
                str.push_back('1');
            else
                str.push_back('0');
        }
        else if (*s.lower_bound(v[i].first)<=v[i].second)
            str.push_back('1');
        else
            str.push_back('0');
    }
    cout << str << endl;
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