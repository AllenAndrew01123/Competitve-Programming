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
    ll idx1, idx2;
    ll ans = LLONG_MAX;
    for (idx1 = 0, idx2 = 0; idx1 < n && idx2 < n;)
    {
        if (arr[idx1] == arr[idx2])
            idx2++;
        else
        {
            ans = min(ans, (idx1 + n - idx2 ) * arr[idx1]);
            idx1 = idx2;
        }
        // cout<<ans<<endl;
    }
    ans = min(ans, (idx1 + n - idx2) * arr[idx1]);
    cout<<max(ans,0LL)<<endl;
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