#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll facto[2001],invfacto[2001];
ll binpow(ll x,ll n)
{
    if (n == 0)
        return 1;
    ll res = binpow(x, n / 2);
    if (n % 2)
        return (((res%mod) * (res%mod))%mod * (x%mod))%mod;
    else
        return ((res%mod) * (res%mod))%mod;
}
void fact()
{
    facto[0]=1;
    facto[1]=1;
    for(int i=1;i<=2000;i++)
    {
        facto[i]=((facto[i-1]%mod)*(i%mod))%mod;
    }
}
void invfact()
{
    invfacto[0]=1;
    invfacto[1]=1;
    for(int i=1;i<=2000;i++)
    {
        invfacto[i]=binpow(facto[i],mod-2)%mod;
    }
}
int main()
{
    fact();
    invfact();
    cin.tie(0)->sync_with_stdio(0);
    ll n,m;cin>>n>>m;
    cout<<((((facto[2*m+n-1]%mod)*(invfacto[n-1]%mod))%mod)*(invfacto[2*m]%mod))%mod;
}