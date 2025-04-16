#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<ll> v1(30, 0), v0(30, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 29; j >= 0; j--)
        {
            if ((arr[i] >> j) & 1)
                v1[j]++;
            else
                v0[j]++;
        }
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll sum=0;
        for (int j = 29; j >= 0; j--)
        {
            if ((arr[i] >> j) & 1)
            sum+=(1<<j)*v0[j];
            else
            sum+=(1<<j)*v1[j];
        }
        ans=max(ans,sum);
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