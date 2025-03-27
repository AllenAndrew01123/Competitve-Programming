#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    map<ll,ll>mp1,mp2;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        ll x;cin>>x;
        if(mp1.find(x)==mp1.end())
        {
            mp1[x]=0;
            mp2[x]=i;
            sum=2*sum;
        }
        else
        {
            mp1[x]=mp1[x]+mp2[x];
            mp2[x]=i;
            sum=2*sum+mp1[x];
        }
    }
    cout<<sum<<endl;
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