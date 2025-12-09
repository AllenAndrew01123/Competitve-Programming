#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
bool find(ll n, ll m)
{
    if (n == m)
        return true;
    if (n % 3 != 0)
        return false;
    return find(2*n/3,m)||find(n/3,m);
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    if (find(n, m))
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