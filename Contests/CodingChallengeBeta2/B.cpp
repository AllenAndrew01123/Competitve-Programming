#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n+1];
    ll pref[n+1]={0};
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        pref[i]=pref[i-1]+arr[i];
    }
    if (pref[n] % n != 0)
    {
        cout << -1 << endl;
        return;
    }
    ll previdx=0;
    ll target=pref[n]/n;
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        if((pref[i]-pref[previdx])*1.0/(i-previdx)==target)
        {
            ans+=(i-previdx-1);
            previdx=i;
        }
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