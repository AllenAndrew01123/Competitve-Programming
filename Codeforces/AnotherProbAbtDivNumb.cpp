#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<ll> p(1e5, 1);
vector<ll> primes;
void eos()
{
    for (int i = 2; i < 1e5; i++)
    {
        if (!p[i])
            continue;
        primes.push_back(i);
        for (int j = 2 * i; j < 1e5; j += i)
            p[j] = 0;
    }
}
ll getfact(ll n)
{
    ll cnt=0;
    for(int i=0;i<primes.size();i++)
    {
        while(n%primes[i]==0)
        {
            cnt++;
            n/=primes[i];
        }
    }
    if(n>1)
    cnt++;
    return cnt;
}
void solve()
{
    ll a,b,k;cin>>a>>b>>k;
    if(k==1)
    {
        if((a%b==0 || b%a==0)&&a!=b)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        return;
    }
    ll num1=getfact(a);
    ll num2=getfact(b);
    if(num1+num2<k)
    cout<<"NO\n";
    else
    cout<<"YES\n";
}
int main()
{
    eos();
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}