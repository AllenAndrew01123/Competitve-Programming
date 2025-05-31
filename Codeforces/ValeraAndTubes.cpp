#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<pair<ll, ll>> v;
    ll row=1;
    while(row<=n)
    {
        for(int col=1;col<=m;col++)
        v.push_back(make_pair(row,col));
        row++;
        if(row>n)
        break;
        for(int col=m;col>=1;col--)
        v.push_back(make_pair(row,col));
        row++;
    }
    ll idx = 0;
    while (k > 1)
    {
        cout << 2 << " " << v[idx].first << " " << v[idx].second << " " << v[idx + 1].first << " " << v[idx + 1].second << endl;
        k--;
        idx += 2;
    }
    cout << v.size() - idx << " ";
    for (; idx < v.size(); idx++)
        cout << v[idx].first << " " << v[idx].second << " ";
    cout << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}