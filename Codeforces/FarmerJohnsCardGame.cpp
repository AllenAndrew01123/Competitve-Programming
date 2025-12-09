#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
bool comp(vector<ll> &a, vector<ll> &b)
{
    return a[0] < b[0];
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> p;
    vector<vector<ll>> v(n, vector<ll>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> v[i][j];
        sort(v[i].begin(), v[i].end());
        p.push_back({v[i][0], i});
    }
    sort(p.begin(), p.end());
    sort(v.begin(), v.end(), comp);
    vector<ll>num;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            num.push_back(v[i][j]);
        }
    }
    if(!is_sorted(num.begin(),num.end()))
    {
        cout<<-1<<endl;
        return;
    }
    for (auto x : p)
        cout << x.second+1 << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}