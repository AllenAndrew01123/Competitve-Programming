#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,m;cin>>n>>m;
    vector<ll>v(m);
    for(int i=0;i<m;i++)
    cin>>v[i];
    sort(v.begin(),v.end());
    ll ans=0;
    for(int i=1;i<=(n-1)/2;i++)
    {
        ll l=v.end()-lower_bound(v.begin(),v.end(),i);
        ll r=v.end()-lower_bound(v.begin(),v.end(),n-i);
        ans+=(l-1)*r;
    }
    ans=2*ans;
    if(n%2==0)
    {
        ll l=v.end()-lower_bound(v.begin(),v.end(),n/2);
        ll r=v.end()-lower_bound(v.begin(),v.end(),n/2);
        ans+=(l-1)*r;
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