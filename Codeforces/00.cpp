#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
ll check(ll x, ll y, vector<string> &v)
{
    if (x < 0 || x > 137)
        return 0;
    if (y < 0 || y > 137)
        return 0;
    return v[x][y] == '@';
}
void solve()
{
    vector<string> v(138);
    string s;
    int idx = 0;
    while (cin >> s)
    {
        v[idx] = s;
        idx++;
    }
    ll prevcnt = -1;
    ll currcnt = 0;
    ll sz = v[0].length();
    while (prevcnt != currcnt)
    {
        vector<pair<ll, ll>> p;
        prevcnt = currcnt;
        for (int i = 0; i < sz; i++)
        {
            for (int j = 0; j < sz; j++)
            {
                if (v[i][j] == '@')
                {
                    if (check(i - 1, j - 1, v) + check(i - 1, j, v) + check(i - 1, j + 1, v) + check(i, j - 1, v) + check(i, j + 1, v) + check(i + 1, j - 1, v) + check(i + 1, j, v) + check(i + 1, j + 1, v) < 4)
                    {
                        p.push_back({i, j});
                        // cout<<currcnt<<endl;
                        currcnt++;
                    }
                }
            }
        }
        // cout << currcnt << endl;
        for (auto x : p)
            v[x.first][x.second] = '.';
        p.clear();
    }
    cout << currcnt << endl;
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int t = 1;
    while (t--)
    {
        solve();
    }
}
