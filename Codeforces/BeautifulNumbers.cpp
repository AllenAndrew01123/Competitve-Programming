#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll fact[1000001],inv[1000001];
ll binpow(ll a, ll b) {
    if (b == 0)
        return 1;
    ll res = binpow(a, b / 2);
    if (b % 2)
        return ((((res%mod) * (res%mod))%mod) * (a%mod))%mod;
    else
        return ((res%mod) * (res%mod))%mod;
}
void calc()
{
    fact[0]=1;
    inv[0]=1;
    for(ll i=1;i<=1000000;i++)
    {
        fact[i]=((fact[i-1]%mod)*i)%mod;
        inv[i]=binpow(fact[i],mod-2)%mod;
    }
}
ll nCr(ll n,ll r)
{
    if(n==0||n==r||n<r||r==0)
    return 1;
    return ((((fact[n]%mod)%mod*(inv[r]%mod)%mod)%mod)*inv[n-r]%mod)%mod;
}
ll check(ll n, ll a,ll b)
{
    while(n>0)
    {
        if(n%10==a || n%10==b)
        n/=10;
        else
        return false;
    }
    return true;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    calc();
    ll a,b,n;cin>>a>>b>>n;
    ll cnt1=n;
    ll ans=0;
    for(ll i=min(a,b)*n;i<=max(a,b)*n;i+=abs(a-b))
    {
        if(check(i,a,b))
        {
            ans=(ans%mod+nCr(n,cnt1)%mod)%mod;
        }
        cnt1--;
    }
    cout<<ans<<endl;
}

