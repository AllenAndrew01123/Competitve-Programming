#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 1; i < n; i++)
        cin >> a[i];
    int mx = *max_element(a + 1, a + n);
    mx++;
    int x[n + 1];
    x[1] = mx;
    for (int i = 2; i <=n; i++)
    {

        x[i] = mx + (a[i - 1]);
        mx+=a[i-1];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << x[i] << " ";
    }
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