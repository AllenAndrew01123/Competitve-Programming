#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,k;cin>>n>>k;
    for(int i=1;i<=k-3;i++)
    {
        cout<<1<<" ";
    }
    n=n-k+3;
    if(n&1)
    {
        cout<<1<<" "<<n/2<<" "<<n/2<<endl;
        return;
    }
    if(n%4!=0)
    {
        cout<<2<<" "<<n/2-1<<" "<<n/2-1<<endl;
        return;
    }
    cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
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