#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;cin>>n;
    ll num=5;
    ll ans=0;
    while(num<1e10)
    {
        ans+=n/num;
        num*=5;
    }
    cout<<ans<<endl;
}