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
    ll idx=max(1LL,n-2*k);
    ll ans=LLONG_MIN;
    for(;idx<=n;idx++)
    {
        for(ll j=idx+1;j<=n;j++)
        ans=max(ans,idx*j-k*(arr[idx]|arr[j]));
    }
    cout<<ans<<endl;
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