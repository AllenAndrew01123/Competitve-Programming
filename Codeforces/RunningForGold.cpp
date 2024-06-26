#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    int a[n + 1][6];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> a[i][j];
        }
    }
    int winner = 1;
    for (int i = 2; i <= n; i++)
    {
        int a1 = a[winner][1] < a[i][1];
        int a2 = a[winner][2] < a[i][2];
        int a3 = a[winner][3] < a[i][3];
        int a4 = a[winner][4] < a[i][4];
        int a5 = a[winner][5] < a[i][5];
        if (a1 + a2 + a3 + a4 + a5 >= 3)
        {
            continue;
        }
        else
        {
            winner = i;
        }
    }
    // cout << winner << endl;
    for (int i = 1; i <= n; i++)
    {
        if (i != winner)
        {
            int a1 = a[winner][1] < a[i][1];
            int a2 = a[winner][2] < a[i][2];
            int a3 = a[winner][3] < a[i][3];
            int a4 = a[winner][4] < a[i][4];
            int a5 = a[winner][5] < a[i][5];
            if (a1 + a2 + a3 + a4 + a5 < 3)
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    cout << winner << endl;
    return;
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