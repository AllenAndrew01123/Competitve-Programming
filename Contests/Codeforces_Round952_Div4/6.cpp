#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll h,n;cin>>h>>n;
    ll a[n];
    ll c[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    ll l=0,r=1e12;
    ll ans=1;
    while(l<=r)
    {
        ll mid = l + (r-l)/2;
        ll attack=0;
        for(int i=0;i<n;i++)
        {
            attack+=(a[i]*(mid/c[i]+1));
            if(attack>=h)
            break;
        }
        if(h-attack<=0)
        {
            r=mid-1;
            ans=mid;
        }
        else
        {
            l=mid+1;
            
        }
    }
    cout<<ans+1<<endl;
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