#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    char a[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    }
    if (a[1][1] == a[n][m])
    {
        cout << "YES\n";
        return;
    }
    bool check1 = false, check2 = false;
    if (a[1][1] == 'W')
    {
        for (int i = 1; i <= m; i++)
        {
            if (a[1][i] == 'B')
            {
                check1 = true;
            }
        }
        for (int j = 1; j <= n; j++)
        {
            if (a[j][1] == 'B')
            {
                check2 = true;
            }
        }
        for (int i = 1; i <= m; i++)
        {
            if (a[n][i] == 'W')
            {
                check1 = true;
            }
        }
        for (int j = 1; j <= n; j++)
        {
            if (a[j][m] == 'W')
            {
                check2 = true;
            }
        }
    }
    else if (a[1][1] =='B')
    {
        for (int i = 1; i <= m; i++)
        {
            if (a[1][i] == 'W')
            {
                check1 = true;
            }
        }
        for (int j = 1; j <= n; j++)
        {
            if (a[j][1] == 'W')
            {
                check2 = true;
            }
        }
        for (int i = 1; i <= m; i++)
        {
            if (a[n][i] == 'B')
            {
                check1 = true;
            }
        }
        for (int j = 1; j <= n; j++)
        {
            if (a[j][m] == 'B')
            {
                check2 = true;
            }
        }
    }
    if (check1 && check2)
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