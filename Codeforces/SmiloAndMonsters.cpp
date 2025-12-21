#include <bits/stdc++.h>
#define mod 1000000007
typedef long long ll;
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    ll left = 0, right = n - 1;
    ll ans = 0, x = 0;
    while (left < right)
    {
        if (x + arr[left] < arr[right])
        {
            ans += arr[left];
            x += arr[left];
            arr[left] = 0;
            left++;
        }
        else
        {
            ans += arr[right] - x;
            ans++;
            arr[left] -= (arr[right] - x);
            right--;
            x = 0;
        }
    }
    if (arr[right] == 0)
        cout << ans << endl;
    else
    {
        if(arr[right]==1)
        cout<<ans+1<<endl;
        else
        cout << ans + (arr[right] - x) / 2 + 1 + ((arr[right] - x) & 1) << endl;
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