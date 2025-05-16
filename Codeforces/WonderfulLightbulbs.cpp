#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    set<pair<ll, ll>> s;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        s.insert(make_pair(y, x));
    }
    while (s.size() != 1)
    {   
        ll topx = s.rbegin()->second;
        ll topy = s.rbegin()->first;
        s.erase(make_pair(topy, topx));
        if (s.find(make_pair(topy - 1, topx)) != s.end())
            s.erase(make_pair(topy - 1, topx));
        else
            s.insert(make_pair(topy - 1, topx));
        if (s.find(make_pair(topy - 1, topx + 1)) != s.end())
            s.erase(make_pair(topy - 1, topx + 1));
        else
            s.insert(make_pair(topy - 1, topx + 1));
        if (s.find(make_pair(topy - 2, topx + 1)) != s.end())
            s.erase(make_pair(topy - 2, topx + 1));
        else
            s.insert(make_pair(topy - 2, topx + 1));
    }
    cout<<s.begin()->second<<" "<<s.begin()->first<<endl;
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