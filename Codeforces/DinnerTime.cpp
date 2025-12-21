#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m, p, q;
    cin >> n >> m >> p >> q;
    if (n % p)
        cout << "YES\n";
    else if (n / p * q == m)
        cout << "YES\n";
    else
        cout << "NO\n";
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