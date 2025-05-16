#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll x;
    cin >> x;
    arr[0] = abs(x);
    ll val = arr[0];
    for (int i = 1; i < n; i++)
    {
        ll x;
        cin >> x;
        arr[i] = abs(x);
    }
    sort(arr, arr + n);
    if (n & 1)
    {
        if (arr[n / 2] >= val)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else
    {
        if (arr[n / 2] >= val || arr[n / 2 - 1] >= val)
            cout << "YES\n";
        else
            cout << "NO\n";
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