#include<bits/stdc++.h>
using namespace std;
#define momd 1000000007
typedef long long ll;
void solve()
{
    ll x,y;cin>>x>>y;
    if(x<y)
    {
        ll k=y/x;
        ll close=(y-k*x)/2;
        cout<<k*x+close<<endl;
        return;
    }
    else if(x>y)
    {
        cout<<(x+y)<<endl;
        return;
    }
    else
    {
        cout<<x<<endl;
        return;
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