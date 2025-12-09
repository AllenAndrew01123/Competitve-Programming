#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    cout << ((a + b + c) & 1 ? -1 : min(a + b, (a + b + c) / 2)) << endl;
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