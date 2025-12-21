#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    vector<ll>v(n+1,0);
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;
        v[x]++;
    }
    ll l=0,r=n;
    ll ans;
    while(l<=r)
    {
        ll mid=l+(r-l)/2;
        bool flag=false;
        ll cnt=0;
        for(int i=0;i<=mid-1;i++)
        {
            if(v[i]==0)
            flag=true;
            if(v[i]==1)
            cnt++;
        }
        if(flag||cnt>1)
        {
            r=mid-1;
        }
        else
        {
            ans=mid;
            l=mid+1;
        }
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