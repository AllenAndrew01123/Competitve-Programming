#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    priority_queue<pair<ll, ll>> pq;
    for (int i = 0; i < n; i++)
        pq.push(make_pair(-arr2[i], -arr1[i]));
    ll damage = 0;
    while (k > 0 && !pq.empty())
    {
        damage += k;
        while (damage >= (-pq.top().second) && !pq.empty())
            pq.pop();
        if(!pq.empty())
        k+=pq.top().first;
    }
    if(pq.empty())
    cout<<"YES\n";
    else
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