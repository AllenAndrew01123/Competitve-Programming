#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, c;
    cin >> n >> c;
    string s;
    cin >> s;
    map<char, ll> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    vector<ll> v;
    for (auto x : mp)
    {
        v.push_back(x.second);
    }
    sort(v.begin(), v.end(), greater<int>());
    ll mincost = n * (n + 1) / 2;
    ll cnt=1;
    for (auto x : v)
    {
        n = n - x;
        mincost=min(mincost,cnt*c+(n)*(n+1)/2);
        cnt++;
    }
    cout<<mincost<<endl;
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