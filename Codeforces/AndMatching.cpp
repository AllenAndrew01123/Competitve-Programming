#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    int n, k;
    cin >> n >> k;
    if (k == n - 1 && n == 4)
    {
        cout << -1 << endl;
        return;
    }
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = i;
    }
    if (k == n - 1)
    {
        cout << n - 1 << " " << n - 2 << endl;
        cout << n - 3 << " " << 1 << endl;
        cout << 0 << " " << 2 << endl;
        for (int i = 3; a[i]<a[n-1-i]; i++)
        {
            cout << a[i] << " " << a[n - 1 - i] << endl;
        }
        return;
    }
    swap(a[n - 1], a[n - 1 - k]);
    for (int i = 0; i < n / 2; i++)
    {
        cout << a[i] << " " << a[n - 1 - i] << endl;
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