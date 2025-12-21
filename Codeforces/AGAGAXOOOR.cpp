#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;
    cin >> n;
    int a[n + 1];
    int p[n + 1] = {0};
    p[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        p[i] = p[i - 1] ^ a[i];
    }
    if (count(a + 1, a + n + 1, a[1]) == n)
    {
        cout << "YES\n";
        return;
    }
    if ((p[n]) == 0)
    {
        cout << "YES\n";
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            if ((p[i] == (p[k] ^ p[i])) && ((p[k] ^ p[n]) == p[i]))
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
    return;
}
signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}