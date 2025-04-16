#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll ans[n][m];
    if (m % k == 0)
    {
        ll st = 0;
        for (int i = 0; i < n; i++)
        {
            ll idx = st;
            for (int j = 0; j < m; j++, idx++)
                ans[i][j] = idx % k + 1;
            st = (st + 1) % k;
        }
    }
    else if (n % k == 0)
    {
        ll st = 0;
        for (int j = 0; j < m; j++)
        {
            ll idx = st;
            for (int i = 0; i < n; i++, idx++)
                ans[i][j] = idx % k + 1;
            st = (st + 1) % k;
        }
    }
    else
    {
        if (m <= n)
        {
            ll st = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    ans[i][j] = st % k + 1;
                    st++;
                }
            }
        }
        else
        {
            ll st = 0;
            for (int j = 0; j < m; j++)
            {
                for (int i = 0; i < n; i++)
                {
                    ans[i][j] = st % k + 1;
                    st++;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
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