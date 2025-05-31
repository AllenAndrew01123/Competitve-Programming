#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    set<ll> visited;
    ll idx = n;
    ll c = 0;
    while (true)
    {
        if (visited.find(idx) != visited.end())
        {
            cout << "Yes\n";
            return;
        }
        if (arr[idx] > n)
        {
            if (c < k)
                cout << "No\n";
            else
                cout << "Yes\n";
            return;
        }
        visited.insert(idx);
        idx -= arr[idx];
        if (idx <= 0)
            idx += n;
        c++;
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