#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]] = i+1;
    }
    ll pref[n], suff[n];
    pref[0] = arr[0];
    for (int i = 1; i < n; i++)
        pref[i] = min(pref[i - 1], arr[i]);
    suff[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        suff[i] = min(suff[i + 1], arr[i]);
    for(int i=1;i<n-1;i++)
    {
        if(pref[i]<arr[i] && suff[i]<arr[i])
        {
            cout<<"YES\n";
            cout<<mp[pref[i]]<<" "<<i+1<<" "<<mp[suff[i]]<<endl;
            return;
        }
    }
    cout<<"NO\n";

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