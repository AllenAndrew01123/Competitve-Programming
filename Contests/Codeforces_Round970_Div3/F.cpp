#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll binexp(ll x, ll y)
{
    if (y == 0)
        return 1;
    ll num = binexp(x, y / 2);
    if (y & 1)
        return (((num%mod) * (num%mod))%mod * (x%mod))%mod;
    else
        return ((num%mod) * (num%mod))%mod;
}
void solve()
{
    ll n;cin>>n;
    ll arr[n];
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    ll num=0;
    for(int i=0;i<n;i++)
    {
        sum-=arr[i];
        num=(num%mod+((arr[i]%mod)*(sum%mod)%mod)%mod)%mod;
    }
    ll denom=n*(n-1)/2;
    cout<<((num%mod)*(binexp(denom,mod-2))%mod)%mod<<endl;
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