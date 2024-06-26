#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    int idx;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == x)
            idx = i;
    }
    int l = 0, r = n;
    while (r - l > 1)
    {
        int mid = (r + l) / 2;
        if (a[mid] <= x)
            l = mid;
        else 
            r = mid;
    }
    if (idx == l)
        cout << 0 << endl;
    else
    {
        cout << 1 << endl;
        cout << l + 1 << " " << idx + 1 << endl;
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