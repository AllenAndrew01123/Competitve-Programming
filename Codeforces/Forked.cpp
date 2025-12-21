#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void calc(set<pair<ll, ll>> &s, ll x, ll y, ll a, ll b)
{
    s.insert(make_pair(x - a, y - b));
    s.insert(make_pair(x - a, y + b));
    s.insert(make_pair(x + a, y - b));
    s.insert(make_pair(x + a, y + b));
    s.insert(make_pair(x - b, y - a));
    s.insert(make_pair(x - b, y + a));
    s.insert(make_pair(x + b, y - a));
    s.insert(make_pair(x + b, y + a));
}
void solve()
{
    ll a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    set<pair<ll, ll>> s;
    calc(s, xk, yk, a, b);
    calc(s, xq, yq, a, b);
    if(a==b)
    cout<<8-s.size()<<endl;
    else
    cout<<16-s.size()<<endl;
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