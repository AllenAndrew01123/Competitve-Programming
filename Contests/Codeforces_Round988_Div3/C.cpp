#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    if (n <= 4)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 1; i <= n; i += 2)
    {
        if (i != 5)
            cout << i << " ";
    }
    cout << 5 << " " << 4 << " ";
    for (int i = 2; i <= n; i += 2)
    {
        if (i != 4)
            cout << i << " ";
    }
    cout << endl;
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