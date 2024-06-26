#include <bits/stdc++.h>
using namespace std;
int arr[8005];
void solve()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        arr[a[i]]++;
    }
    int ans = 0;
    for (int l = 1; l < n; l++)
    {
        int sum = a[l];
        for (int r = l + 1; r <= n; r++)
        {
            sum += a[r];
            if (sum <= n)
            {
                ans += arr[sum];
                arr[sum] = 0;
            }
            else
            break;
        }
    }
    cout << ans << endl;
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