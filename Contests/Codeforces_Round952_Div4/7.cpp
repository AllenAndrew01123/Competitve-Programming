#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll binexp(ll n,ll po)
{
    if (po == 0)
        return 1;
    ll res = binexp(n, po / 2)%mod;
    if (po % 2)
        return (((res%mod) * (res%mod)%mod) * (n%mod))%mod;
    else
        return ((res%mod) * (res%mod)%mod);
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        ll l,r,k;cin>>l>>r>>k;
        if(k>10)
        {
            cout<<0<<endl;
            continue;
        }
        ll x= 9/k + 1;
        cout<<(binexp(x,r)-binexp(x,l)+mod)%mod<<endl;
    }
		
	
}
