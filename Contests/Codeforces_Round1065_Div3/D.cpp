#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n + 1];
    map<ll, ll> mp;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        mp[arr[i]] = i;
    }
    ll pref[n + 1] = {0};
    ll suff[n + 1] = {0};
    pref[1] = mp[1];
    suff[n] = mp[n];
    for (int i = 2; i <= n; i++)
        pref[i] = min(pref[i - 1], mp[i]);
    for (int i = n - 1; i >= 1; i--)
        suff[i] = max(suff[i + 1], mp[i]);
    for(int i=1;i<n;i++)
    {
        if(pref[i]>suff[i+1])
        {
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
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