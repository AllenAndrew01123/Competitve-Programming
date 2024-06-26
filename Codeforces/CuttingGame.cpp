#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(pair<ll, ll> p, pair<ll, ll> q)
{
    if (p.second < q.second)
        return true;
    return false;
}
void solve()
{
    ll a, b, n, m;
    cin >> a >> b >> n >> m;
    vector<pair<ll, ll>> row;
    vector<pair<ll, ll>> col;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        row.push_back({x - 1, y - 1});
        col.push_back({x - 1, y - 1});
    }
    sort(row.begin(), row.end());
    sort(col.begin(), col.end(), cmp);
    ll alice = 0, bob = 0;
    ll up = 0, down = a - 1, left = 0, right = b - 1;
    for (int i = 1; i <= m; i++)
    {
        char c;
        ll f, score = 0;
        cin >> c >> f;
        if (c == 'U')
        {
            ll i=0;
            while(row[i].first>=up && row[i].first<up+f)
            for (ll i = up; i < up + f; i++)
            {
                if (row[i].second >= left && row[i].second <= right)
                    score++;
            }
            up += f;
        }
        else if (c == 'D')
        {
            for (ll i = down - f + 1; i <= down; i++)
            {
                if (row[i].second >= left && row[i].second <= right)
                    score++;
            }
            down -= f;
        }
        else if (c == 'L')
        {
            for (ll i = left; i < left + f; i++)
            {
                if (col[i].first >= up && col[i].first <= down)
                    score++;
            }
            left += f;
        }
        else
        {
            for (ll i = right - f + 1; i <= right; i++)
            {
                if (col[i].first >= up && col[i].first <= down)
                    score++;
            }
            right -= f;
        }
        if (i & 1)
        {
            alice += score;
        }
        else
        {
            bob += score;
        }
    }
    cout << alice << " " << bob << endl;
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