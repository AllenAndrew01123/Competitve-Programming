#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll cnt = n;
    for (ll i = 2; i <= m; i++)
    {
        ll mn = i * i;
        for (ll j = mn;; j += mn)
        {
            if (j - i >=1 && j-i<=n)
            {
                cnt++;
                // cout << j - i << " " << i << endl;
            }
            else
                break;
        }
    }
    cout << cnt << endl;
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