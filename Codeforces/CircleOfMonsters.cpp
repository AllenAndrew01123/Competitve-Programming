#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    ll a[2*n];
    ll b[2*n];
    ll cost[2*n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        a[i+n]=a[i];
        b[i+n]=b[i];
    }
    cost[0]=a[0];
    ll sum=0;
    for(int i=1;i<2*n;i++)
    {
        cost[i]=max(0LL,a[i]-b[i-1]); 
        if(i<n)
        sum+=cost[i];
    }
    ll ans=LLONG_MAX;
    for(int i=0;i<n;i++)
    {
        ans=min(ans,sum+a[i]);
        // cout<<ans<<endl;
        sum-=cost[i+1];
        sum+=cost[i+n];
    }
    cout<<ans<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}