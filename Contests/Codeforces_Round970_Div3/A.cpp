#include <bits/stdc++.h>
#define mod 1000000007
typedef long long ll;
using namespace std;
void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a % 2 == 0)
    {
        if ((b % 2 == 0) || (b & 1 && a != 0))
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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