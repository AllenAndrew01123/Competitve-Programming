#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n+1],p[n+1];
    p[0]= 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a+1, a + n+1);
    for(int i=1;i<=n;i++)
        p[i]=p[i-1]+a[i];
    ll ans=1e18;
    for(ll y=0;y<n;y++)
    {
        ll x;
        if((k+a[1]-p[n-y])>=0)
        x=a[1]-((k+a[1]-p[n-y])/(y+1));
        else
        x=a[1]-floor((k+a[1]-p[n-y])*1.0/(y+1));
        ans=min(ans,max(0LL,x)+y);
        // cout<<x<<" "<<y<<endl;
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