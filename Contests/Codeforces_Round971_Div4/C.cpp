#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll x,y,k;cin>>x>>y>>k;
    ll xmov,ymov;
    if(x%k==0)
    xmov=x/k;
    else
    xmov=x/k+1;
    if(y%k==0)
    ymov=y/k;
    else
    ymov=y/k+1;
    if(xmov>ymov)
    cout<<2*xmov-1<<endl;
    else
    cout<<2*ymov<<endl;
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