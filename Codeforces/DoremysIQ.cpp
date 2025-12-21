#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> v(n + 1), a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    ll qnew = 0;
    for (int i = n; i >= 1; i--)
    {
        if (a[i] <= qnew)
            v[i] = 1;
        else if (a[i] > qnew && qnew < q)
        {
            v[i] = 1;
            qnew++;
        }
        else
            v[i] = 0;
    }
    for (int i = 1; i <= n; i++)
        cout << v[i];
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