#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;cin>>n;
    if(n&1)
    {
        cout<<0<<endl;
        return 0;
    }
    ll ans=0;
    ll mul=5;
    while(mul>=0 && mul<=n)
    {
        ans+=((n/mul)/2);
        mul*=5;
    }
    cout<<ans<<endl;
}