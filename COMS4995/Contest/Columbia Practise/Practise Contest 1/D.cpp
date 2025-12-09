#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    string s;
    cin >> s;
    set<pair<ll, ll>> coordinates;
    coordinates.insert({0, 0});
    ll ans = 0;
    ll x = 0, y = 0;
    map<pair<ll, ll>, set<char>> mp;
    for (auto dir : s)
    {
        if (dir == 'N')
        {
            y++;
            if (coordinates.find({x, y}) != coordinates.end())
            {
                bool flag = false;
                for (auto x : mp[{x, y}])
                {
                    if (x == dir)
                        flag = true;
                }
                ll xold = x, yold = y - 1;
                for (auto x : mp[{xold, yold}])
                {
                    if (x == 'S')
                        flag = true;
                }
                mp[{xold, yold}].insert('S');
                if (flag)
                    ans++;
                else
                {
                    ans += 5;
                    mp[{x, y}].insert(dir);
                }
            }
            else
            {
                ans += 5;
                coordinates.insert({x, y});
                mp[{x, y}].insert(dir);
            }
        }
        if (dir == 'S')
        {
            y--;
            if (coordinates.find({x, y}) != coordinates.end())
            {
                bool flag = false;
                for (auto x : mp[{x, y}])
                {
                    if (x == dir)
                        flag = true;
                }
                ll xold = x, yold = y + 1;
                for (auto x : mp[{xold, yold}])
                {
                    if (x == 'N')
                        flag = true;
                }
                mp[{xold, yold}].insert('N');
                if (flag)
                    ans++;
                else
                {
                    ans += 5;
                    mp[{x, y}].insert(dir);
                }
            }
            else
            {
                ans += 5;
                coordinates.insert({x, y});
                mp[{x, y}].insert(dir);
            }
        }
        if (dir == 'E')
        {
            x++;
            if (coordinates.find({x, y}) != coordinates.end())
            {
                bool flag = false;
                for (auto x : mp[{x, y}])
                {
                    if (x == dir)
                        flag = true;
                }
                ll xold = x - 1, yold = y;
                for (auto x : mp[{xold, yold}])
                {
                    if (x == 'W')
                        flag = true;
                }
                mp[{xold, yold}].insert('W');
                if (flag)
                    ans++;
                else
                {
                    ans += 5;
                    mp[{x, y}].insert(dir);
                }
            }
            else
            {
                ans += 5;
                coordinates.insert({x, y});
                mp[{x, y}].insert(dir);
            }
        }
        if (dir == 'W')
        {
            x--;
            if (coordinates.find({x, y}) != coordinates.end())
            {
                bool flag = false;
                for (auto x : mp[{x, y}])
                {
                    if (x == dir)
                        flag = true;
                }
                ll xold = x + 1, yold = y;
                for (auto x : mp[{xold, yold}])
                {
                    if (x == 'E')
                        flag = true;
                }
                mp[{xold, yold}].insert('E');
                if (flag)
                    ans++;
                else
                {
                    ans += 5;
                    mp[{x, y}].insert(dir);
                }
            }
            else
            {
                ans += 5;
                coordinates.insert({x, y});
                mp[{x, y}].insert(dir);
            }
        }
        // cout << ans << endl;
    }
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