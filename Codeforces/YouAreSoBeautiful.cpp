#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    ll a[n+1];
    for(int i=1;i<=n;i++)
    cin>>a[i];
    map<ll,ll>left,right;
    for(int i=1;i<=n;i++)
    {
        if(left.find(a[i])==left.end())
        {
            left[a[i]]=i;
            right[a[i]]=i;
        }
        else
        right[a[i]]=i;
    }
    ll ans=0;
    ll cnt=0;
    for(int i=n;i>=1;i--)
    {
        if(right[a[i]]==i)
        cnt++;
        if(left[a[i]]==i)
        ans+=cnt;
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