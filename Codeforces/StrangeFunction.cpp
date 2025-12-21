#include<bits/stdc++.h> 
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    ll ans=0;
    if(n==1)
    {
        cout<<2<<endl;
        return;
    }
    if(n==2)
    {
        cout<<5<<endl;
        return;
    }
    ll arr[101];
    arr[1]=1;
    for(ll i=2;i<=100;i++)
    {
        arr[i]=(arr[i-1]*i)/__gcd(arr[i-1],i);
    }
    for(ll i=2;i<=100;i++)
    {
        ans=(ans%mod+i*((n/arr[i-1])-n/arr[i])%mod)%mod;
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