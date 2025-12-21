#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << "! 1" << endl;
        return 0;
    }
    ll l = 1, r = n;
    while (r - l > 1)
    {
        ll mid = (l + r) / 2;
        ll a, b, c;
        cout << "? " << mid << endl;
        cin >> a;
        cout << "? " << mid - 1 << endl;
        cin >> b;
        cout << "? " << mid + 1 << endl;
        cin >> c;
        if (a < min(b, c))
        {
            cout << "! " << mid << endl;
            return 0;
        }
        if (b < c)
            r = mid;
        else
            l = mid;
    }
    ll a, b;
    cout << "? " << l << endl;
    cin >> a;
    cout << "? " << r << endl;
    cin >> b;
    cout << "! ";
    cout << ((a < b) ? l : r) << endl;
}