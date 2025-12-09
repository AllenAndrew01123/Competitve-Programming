#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;
    ll ans = a / b;
    if (b == a || n <= ans)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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