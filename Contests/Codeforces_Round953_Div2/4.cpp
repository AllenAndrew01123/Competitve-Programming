#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, c;
    cin >> n >> c;
    ll a[n + 1],pref[n+1];
    ll mx=LLONG_MIN;
    ll idx=0;
    pref[0]=0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    a[1]+=c;
    for (int i = 1; i <= n; i++)
    {
        pref[i]=pref[i-1]+a[i];
        if(a[i]>mx)
        {
            mx=a[i];
            idx=i;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(a[i]==mx && i==idx)
        {
            cout<<0<<" ";
            continue;
        }
        else
        {
            if(a[i]+pref[i-1]>=mx)
            cout<<i-1<<" ";
            else
            cout<<i<<" ";
        }
    }
    cout<<endl;
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