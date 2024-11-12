#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    set<ll> s;
    for (int j = 1; j * j <= n; j++)
    {
        if (n % j == 0)
        {
            s.insert(j);
            s.insert(n / j);
        }
    }
    ll c=0;
    for (auto x : s)
    {
        ll gc = 0;
        for (int i = 0, j = x ; j < n; i++, j++)
        {
            gc = __gcd(gc, abs(a[i] - a[j]));
        }
        if (gc != 1)
            c++;
    }
    cout << c << endl;
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