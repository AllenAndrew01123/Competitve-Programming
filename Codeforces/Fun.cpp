#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,x;
    cin>>n>>x;
    ll ans=0;
    ll a=min(x-2,(n-1)/2);
    for(ll i=1;i<=a;i++)
    {
        ll b=min(x-i-1,((n-i)/(i+1)));
        for(ll j=1;j<=b;j++)
        {
            ans+=min(x-i-j,(n-i*j)/(i+j));
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