#include <bits/stdc++.h>
using namespace std;
#define mod 10000000009
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
        mp[arr[i]]++;
    }
    for(auto x:mp)
    {
        if(x.second>1)
        {
            cout<<1<<endl;
            cout<<x.first<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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