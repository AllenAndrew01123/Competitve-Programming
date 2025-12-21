#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
bool check(ll x, ll y, ll r, ll c)
{
    if (x < 0 || x >= r)
        return false;
    if (y < 0 || y >= c)
        return false;
    return true;
}
void solve()
{
    ll r, c;
    cin >> r >> c;
    ll startx, starty, endx, endy;
    cin >> startx >> starty >> endx >> endy;
    startx--;
    starty--;
    endx--;
    endy--;
    vector<vector<ll>> grid(r, vector<ll>(c, 0));
    for (int i = 0; i < r; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < c; j++)
            grid[i][j] = (s[j] == '1');
    }
    const int dr[4] = {0, 1, 0, -1};
    const int dc[4] = {1, 0, -1, 0};

    ll x = startx, y = starty;
    ll dir = 0;
    set<tuple<ll, ll, ll>> visited;
    while (true)
    {
        if (x == endx && y == endy)
        {
            cout << 1 << endl;
            return;
        }
        if (visited.count({x,y,dir}))
        {
            cout << 0 << endl;
            return;
        }
        visited.insert({x,y,dir});
        ll left = (dir + 3) % 4;
        ll lx = x + dr[left], ly = y + dc[left];
        if (check(lx, ly, r, c) && grid[lx][ly] == 0)
        {
            dir = left;
            x = lx;
            y = ly;
            continue;
        }
        ll fx = x + dr[dir], fy = y + dc[dir];
        if (check(fx, fy, r, c) && grid[fx][fy] == 0)
        {
            x = fx;
            y = fy;
            continue;
        }
        dir = (dir + 1) % 4;
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}
