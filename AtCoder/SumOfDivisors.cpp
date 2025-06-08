#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
            v[j]++;
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++)
        ans += v[i] * i;
    cout << ans << endl;
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