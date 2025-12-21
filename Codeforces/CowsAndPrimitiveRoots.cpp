#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    ll ans=0;
    for(ll i=1;i<=n-1;i++)
    {
        if(__gcd(i,n-1)==1)
        ans++;
    }
    cout<<ans<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    while(t--)
    {
        solve();
    }
}