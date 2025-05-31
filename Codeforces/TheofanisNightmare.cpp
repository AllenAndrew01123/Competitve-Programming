#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    ll suff[n + 1];
    suff[n] = arr[n];
    for (int i = n - 1; i >= 1; i--)
        suff[i] = suff[i + 1] + arr[i];
    ll ans=suff[1];
    for(int i=2;i<=n;i++)
    {
        if(suff[i]>=0)
        ans+=suff[i];
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