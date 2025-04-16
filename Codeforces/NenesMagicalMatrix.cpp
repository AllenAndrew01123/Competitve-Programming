#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll sum = 2 * n * (n + 1) * (2 * n + 1) / 6 - n * (n + 1) / 2;
    cout << sum << " " << 2 * n << endl;
    for (int i = n; i >= 1; i--)
    {
        cout << 1 << " " << i << " ";
        for (int j = 1; j <= n; j++)
            cout << j << " ";
        cout << endl;
        cout << 2 << " " << i << " ";
        for (int j = 1; j <= n; j++)
            cout << j << " ";
        cout << endl;
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