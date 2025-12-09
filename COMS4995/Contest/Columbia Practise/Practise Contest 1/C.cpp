#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    vector<string> v(3);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());
    if (v[0] == v[1] && v[1] == v[2])
    {
        cout << 0 << endl;
        return;
    }
    if (v[1] == v[0] || v[1] == v[2])
    {
        cout << 1 << endl;
        return;
    }
    if (v[1][1] == v[0][1] && v[1][0] - v[0][0] <= 2)
    {
        if ((v[2][1] == v[1][1]) && (v[2][0]-v[1][0]==1) && (v[1][0]-v[0][0]==1))
            cout << 0 << endl;
        else
            cout << 1 << endl;
        return;
    }
    if (v[2][1] == v[0][1] && v[2][0] - v[0][0] <= 2)
    {
        if ((v[2][1] == v[1][1]) && (v[2][0]-v[1][0]==1) && (v[1][0]-v[0][0]==1))
            cout << 0 << endl;
        else
            cout << 1 << endl;
        return;
    }
    if (v[2][1] == v[1][1] && v[2][0] - v[1][0] <= 2)
    {
        if ((v[2][1] == v[0][1]) && (v[2][0]-v[1][0]==1) && (v[1][0]-v[0][0]==1))
            cout << 0 << endl;
        else
            cout << 1 << endl;
        return;
    }
    else
    {
        cout << 2 << endl;
        return;
    }
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