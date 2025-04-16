#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    set<ll> s;
    for (int i = 1; i <= 2 * n; i++)
        s.insert(i);
    ll arr[n][n];
    ll ans[2 * n + 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            ans[i + 1 + j + 1] = arr[i][j];
            s.erase(arr[i][j]);
        }
    }
    cout << *s.begin() << " ";
    for (int i = 2; i <= 2 * n; i++)
        cout << ans[i] << " ";
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