#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll ans=arr[n-1]-arr[0];
    priority_queue<ll> pq;
    for (int i = 1; i < n; i++)
        pq.push(arr[i] - arr[i - 1]);
    while(--k)
    {
        ans-=pq.top();
        pq.pop();
    }
    cout<<ans<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    while (t--)
    {
        solve();
    }
}