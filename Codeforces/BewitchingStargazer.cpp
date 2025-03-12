#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
set<ll>s;
ll split(ll left,ll right,ll k)
{
    if(right-left+1>=k)
    {
        if((right-left+1)&1)
        {
            ll mid=(left+right)/2;
            s.insert(mid);
            return mid+split(left,mid-1,k)+split(mid+1,right,k);
        }
        else
        {
            ll mid=(left+right)/2;
            return split(left,mid,k)+split(mid+1,right,k);
        }
    }
    else
        return 0;
}
void solve()
{
    ll n,k;cin>>n>>k;
    ll left=1,right=n;
    ll ans=split(left,right,k);
    cout<<ans<<endl;
    for(auto x:s)
    cout<<x<<endl;
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