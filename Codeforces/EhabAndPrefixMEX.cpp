#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n, -1);
    set<ll> s;
    for (int i = 0; i <= n; i++)
        s.insert(i);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.erase(a[i]);
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
            b[i] = a[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == -1)
        {
            b[i] = *s.begin();
            s.erase(s.begin());
        }
    }
    for (auto x : b)
        cout << x << " ";
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}