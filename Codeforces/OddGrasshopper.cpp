#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    ll x, n;
    cin >> x >> n;
    ll bl = (n / 4) * 4;
    if (x % 2 == 0)
    {
        if (n == bl)
        {
            cout << x << endl;
            return;
        }
        else if (n - bl == 1)
        {
            cout << x - bl - 1 << endl;
            return;
        }
        else if (n - bl == 2)
        {
            cout << x + 1 << endl;
            return;
        }
        else
        {
            cout << x + bl +4 << endl;
            return;
        }
    }
    else
    {
        if (n == bl)
        {
            cout << x << endl;
            return;
        }
        else if (n - bl == 1)
        {
            cout << x + (bl + 1) << endl;
            return;
        }
        else if (n - bl == 2)
        {
            cout << x - 1 << endl;
            return;
        }
        else
        {
            cout << x - 1 - bl - 3 << endl;
            return;
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
    return 0;
}
