#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll x, y;
    cin >> x >> y;
    ll mx = max(x, y);
    ll val = mx * mx - mx + 1;
    if (x == y)
    {
        cout << val << endl;
        return;
    }
    if (mx & 1)
    {
        if (x > y)
            cout << val - x + y << endl;
        else
            cout << val + y - x << endl;
    }
    else
    {
        if (x > y)
            cout << val + x - y << endl;
        else
            cout << val - y + x << endl;
    }
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