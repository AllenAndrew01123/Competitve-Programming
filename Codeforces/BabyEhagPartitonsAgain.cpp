#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll sum = 0;
    bool flag1 = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum & 1)
    {
        cout << 0 << endl;
        return 0;
    }
    ll dp[sum / 2 + 1] = {0};
    dp[0] = 1;
    for (int j = 0; j < n; j++)
    {
        for (int i = sum / 2; i >= arr[j]; i--)
        {
            dp[i] += dp[i - arr[j]];
        }
    }
    if (dp[sum / 2] == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    ll g = 0;
    for (int i = 0; i < n; i++)
        g = __gcd(g, arr[i]);
    for (int i = 0; i < n; i++)
        arr[i] /= g;
    cout << 1 << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] & 1)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
}