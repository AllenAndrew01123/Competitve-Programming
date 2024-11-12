#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,k;cin>>n>>k;
    if(k==1)
    {
        cout<<n%mod<<endl;
        return;
    }
    ll a=1,b=1;
    ll idx=2;
    while(true)
    {
        ll c=(a+b)%k;
        idx++;
        if(c==0)
        {
            cout<<((idx%mod)*(n%mod))%mod<<endl;
            return;
        }
        a=b;
        b=c;
    }
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