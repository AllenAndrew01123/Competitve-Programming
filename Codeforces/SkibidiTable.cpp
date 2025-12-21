#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void getValue(ll x, ll y, ll mn, ll mx, ll size)
{
    if (mn == mx)
    {
        cout << mn << endl;
        return;
    }
    ll noOfElem = (mx - mn + 1);
    ll subtotal = noOfElem / 4;
    if (x <= (size / 2))
    {
        if (y <= (size / 2))
            getValue(x, y, mn, mn + subtotal - 1, size / 2);
        else
            getValue(x, y - (size / 2), mn + 3 * subtotal, mn + 4 * subtotal - 1, size / 2);
    }
    else
    {
        if (y <= (size / 2))
            getValue(x - (size / 2), y, mn + 2 * subtotal, mn + 3 * subtotal - 1, size / 2);
        else
            getValue(x - (size / 2), y - (size / 2), mn + subtotal, mn + 2 * subtotal - 1, size / 2);
    }
}
void getRC(ll d, ll rowmin, ll rowmax, ll colmin, ll colmax, ll mn, ll mx, ll size)
{
    if (mn == mx)
    {
        cout << rowmin << " " << colmin << endl;
        return;
    }
    ll noOfElem = (mx - mn + 1);
    ll subtotal = noOfElem / 4;
    if ((mn <= d) && (d <= mn + subtotal - 1))
        getRC(d, rowmin, rowmax - size / 2, colmin, colmax - size / 2, mn, mn + subtotal - 1, size / 2);
    else if ((mn + subtotal <= d) && (d <= mn + 2 * subtotal - 1))
        getRC(d, rowmin + size / 2, rowmax, colmin + size / 2, colmax, mn + subtotal, mn + 2 * subtotal - 1, size / 2);
    else if ((mn + 2 * subtotal <= d) && (d <= mn + 3 * subtotal - 1))
        getRC(d, rowmin + size / 2, rowmax, colmin, colmax - size / 2, mn + 2 * subtotal, mn + 3 * subtotal - 1, size / 2);
    else if ((mn + 3 * subtotal <= d) && (d <= mn + 4 * subtotal - 1))
        getRC(d, rowmin, rowmax - size / 2, colmin + size / 2, colmax, mn + 3 * subtotal, mn + 4 * subtotal - 1, size / 2);
}
void solve()
{
    ll n;
    cin >> n;
    ll q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "->")
        {
            ll x, y;
            cin >> x >> y;
            getValue(x, y, 1, 1LL << (2 * n), 1 << n);
        }
        else
        {
            ll d;
            cin >> d;
            getRC(d, 1, 1 << n, 1, 1 << n, 1, 1LL << (2 * n), 1 << n);
        }
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