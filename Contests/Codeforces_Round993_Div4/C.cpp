#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll m,a,b,c;
    cin>>m>>a>>b>>c;
    ll ans=0;
    ll rem1=0,rem2=0;
    if(a<=m)
    rem1=m-a;
    if(b<=m)
    rem2=m-b;
    cout<<(min(m,a)+min(m,b)+min(rem1+rem2,c))<<endl;
    
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