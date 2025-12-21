#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll fact[5001],inv[5001];
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
    for(ll i=1;i<=5000;i++)
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
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    calc();
    int t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll ans=1;
        for(ll i=1;i<=n;i++)
        {
            if(2*i>=n)
            ans=(((2*i+1)%mod)*(nCr(n,i)%mod)%mod+ans%mod)%mod;
            else
            {
                for(int j=i+1;j<=2*i+1;j++)
                {
                    ll x=((nCr(j-1,j-1-i)%mod)*(nCr(n-j,2*i+1-j))%mod*j%mod)%mod;
                    ans=((ans%mod)+(x%mod))%mod;
                }
            }
        }
        cout<<ans<<endl;
    }
}