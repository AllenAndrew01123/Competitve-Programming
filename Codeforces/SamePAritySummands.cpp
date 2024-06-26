#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    if (k > n || (k % 2 == 0 && n & 1))
    {
        cout << "NO\n";
        return;
    }
     if (2 * k <= n)
    {
        if ((n - 2 * (k - 1)) % 2 == 0)
        {
            cout << "YES\n";
            int temp = k - 1;
            while (temp--)
                cout << 2 << " ";
            cout << n - 2 * (k - 1) << endl;
            return;
        }
    }
     if (k <= n)
    {
        if ((n - k + 1) & 1)
        {
            cout << "YES\n";
            int temp = k - 1;
            while (temp--)
                cout << 1 << " ";
            cout << n - (k - 1) << endl;
            return;
        }
    }
    cout << "NO\n";
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}