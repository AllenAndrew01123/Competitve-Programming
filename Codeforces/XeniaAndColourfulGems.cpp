#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll findVal(vector<ll> &r,vector<ll> &g,vector<ll> &b)
{
    ll nr=r.size();
    ll ng=g.size();
    ll nb=b.size();
    ll ans=LLONG_MAX;
    for (int i = 0; i < nr; i++)
    {
        vector<ll> xg, xb;
        auto it1 = lower_bound(g.begin(), g.end(), r[i]);
        if (it1 == g.end())
            xg.push_back(g[ng - 1]);
        else if (it1 == g.begin())
            xg.push_back(*it1);
        else
        {
            xg.push_back(*it1);
            xg.push_back(*(--it1));
        }
        auto it2 = lower_bound(b.begin(), b.end(), r[i]);
        if (it2 == b.end())
            xb.push_back(b[nb - 1]);
        else if (it2 == b.begin())
            xb.push_back(*it2);
        else
        {
            xb.push_back(*it2);
            xb.push_back(*(--it2));
        }
        for (auto x : xg)
        {
            for (auto y : xb)
                ans = min(ans, (r[i] - x) * (r[i] - x) + (x - y) * (x - y) + (r[i] - y) * (r[i] - y));
        }
    }
    return ans;
}
void solve()
{
    ll nr, ng, nb;
    cin >> nr >> ng >> nb;
    vector<ll> r(nr), g(ng), b(nb);
    for (int i = 0; i < nr; i++)
        cin >> r[i];
    for (int i = 0; i < ng; i++)
        cin >> g[i];
    for (int i = 0; i < nb; i++)
        cin >> b[i];
    sort(r.begin(), r.end());
    sort(g.begin(), g.end());
    sort(b.begin(), b.end());
    ll ans = LLONG_MAX;
    ans=min(ans,findVal(r,g,b));
    ans=min(ans,findVal(g,r,b));
    ans=min(ans,findVal(b,r,g));
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