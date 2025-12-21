#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;cin>>n;
    ll ans=0;
    for(ll i=1;i*i<=2*n;i++)
    {
        if((2*n)%i==0)
        {
            if((i+(2*n)/i)&1)
                ans+=2;
        }
    }
    cout<<ans<<endl;
}
