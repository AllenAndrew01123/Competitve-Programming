#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    if (n <= 2)
    {
        cout << n << endl;
        return;
    }
    ll arr1[n + 1], arr2[n + 1];
    arr1[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] > arr[i - 1])
            arr1[i] = arr1[i - 1] + 1;
        else
            arr1[i] = 1;
    }
    arr2[n] = 1;
    for (int i = n - 1; i >= 1; i--)
    {
        if (arr[i] < arr[i + 1])
            arr2[i] = arr2[i + 1] + 1;
        else
            arr2[i] = 1;
    }
    ll dp[n + 1];
    dp[1] = arr2[2] + 1;
    dp[n] = arr1[n - 1] + 1;
    for (int i = 2; i <= n - 1; i++)
    {
        if (arr[i + 1] - arr[i - 1] >= 2)
            dp[i] = arr1[i - 1] + arr2[i + 1] + 1;
        else
        {
            dp[i] = max(arr1[i - 1], arr2[i + 1]) + 1;
        }
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++)
        ans = max(ans, dp[i]);
    cout << ans << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}