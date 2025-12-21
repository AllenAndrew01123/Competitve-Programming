#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll l = 1, r = n;
    ll init;
    cout << "? " << l << " " << r << endl;
    cin >> init;
    while (r - l > 1)
    {
        ll mid = (l + r) / 2;
        ll x, y;
        cout << "? " << l << " " << mid << endl;
        cin >> x;
        cout << "? " << mid << " " << r << endl;
        cin >> y;
        if (x == init)
        {
            r = mid;
        }
        else if (y == init)
        {
            l = mid;
        }
        else if (mid < init)
        {
            init = x;
            r = mid;
        }
        else
        {
            init = y;
            l = mid;
        }
    }
    ll ans;
    cout << "? " << l << " " << r << endl;
    cin >> ans;
    if (ans == l)
        cout << "! " << r << endl;
    else
        cout << "! " << l << endl;
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