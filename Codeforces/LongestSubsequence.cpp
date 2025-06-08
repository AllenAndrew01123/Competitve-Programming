#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n + 1];
    map<ll, ll> mp;
    vector<ll> freq(m + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    pair<ll, ll> ans = {1, 0};
    for (auto x:mp)
    {
        for (int j = x.first; j <= m; j += x.first)
            freq[j]+=x.second;
    }
    for (int i = 1; i <= m; i++)
    {
        if (freq[i] > ans.second)
            ans = {i, freq[i]};
    }
    cout << ans.first << " " << ans.second << endl;
    for (int i = 1; i <= n; i++)
    {
        if (ans.first % arr[i] == 0)
            cout << i << " ";
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}