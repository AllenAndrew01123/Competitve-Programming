#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
pair<int, int> calc(int r, int c, int k)
{
    while (k--)
    {
        vector<pair<int, int>> v;
        if (c - 1 > 0)
            v.push_back({r, c - 1});
        if (c + 1 < 9)
            v.push_back({r, c + 1});
        if (r - 1 > 0)
            v.push_back({r - 1, c});
        if (r + 1 < 9)
            v.push_back({r + 1, c});
        int choice = rand() % v.size();
        r = v[choice].first;
        c = v[choice].second;
    }
    return make_pair(r,c);
}
void solve(int k)
{
    set<pair<int, int>> s;
    ll sum=0;
    for (int games = 1; games <= 200000; games++)
    {
        s.clear();
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                s.insert(calc(i, j, k));
            }
        }
        sum += 64 - s.size();
    }
    cout <<fixed<<setprecision(6)<<sum*1.0/200000 << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int k = 1;
    solve(k);
}
