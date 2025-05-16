#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll cnt = 0;
    ll ans = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            ans += arr[i + 1] - arr[i];
        }
        else if (arr[i] > arr[i + 1])
        {
            ans += arr[i] - arr[i + 1];
            cnt += arr[i] - arr[i + 1];
        }
    }
    cout<<ans+abs(arr[0]-cnt)<<endl;
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