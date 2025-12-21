#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll r,g,b;cin>>r>>g>>b;
    ll cr,cg,cb;cin>>cr>>cg>>cb;
    ll crg,cgb;cin>>crg>>cgb;
    ll needr=max(r-cr,0LL);
    ll needb=max(b-cb,0LL);
    ll needg=max(g-cg,0LL);
    ll ans=0;
    if(needr>crg || needb>cgb)
    {
        cout<<-1<<endl;
        return;
    }
    // cout<<needr<<" "<<" "<<needg<<" "<<needb<<" "<<crg<<" "<<cgb<<endl;
    ans+=needr+needb;
    crg-=needr;
    cgb-=needb;
    if(needg>crg+cgb)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<ans+max(needg,0LL)<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}