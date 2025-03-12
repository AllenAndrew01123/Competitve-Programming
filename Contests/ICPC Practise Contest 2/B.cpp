#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    ll sc = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] == 1)
        {
            sc += n - i - 1;
            continue;
        }
        else if (k > 0)
        {
            mp[arr[i]]--;
            sc += n - i - 1;
            k--;
        }
        else
        {
            mp[arr[i]]--;
            sc += n - i - 1 - mp[arr[i]];
        }
    }
    cout << sc << endl;
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