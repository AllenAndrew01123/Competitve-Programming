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
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        ll mn, mx;
        mn = min({arr[i], arr[i + 1]});
        mx = max({arr[i], arr[i + 1]});
        if (2 * mn > mx)
            flag = true;
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
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