#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll bin_search(ll pref[],ll x,ll length)
{
    ll l=1,r=length;
    ll ans=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(pref[mid]<=x)
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return ans;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, t;
    cin >> n >> t;
    ll a[n + 1];
    ll pref[n + 1];
    pref[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
    }
    ll ans = LLONG_MIN;
    for (int i = 1; i <= n; i++)
    {
        ll x =bin_search(pref,pref[i-1]+t,n)-(i-1);
        // cout<<x<<endl;
        ans = max(ans, x);
    }
    cout << ans;
}
