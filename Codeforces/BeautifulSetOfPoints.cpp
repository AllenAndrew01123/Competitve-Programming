#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,m;cin>>n>>m;
    cout<<min(n,m)+1<<endl;
    ll t=min(n,m)+1;
    ll x=0,y=min(n,m);
    while(t--)
    {
        cout<<x<<" "<<y<<endl;
        x++;
        y--;
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;t=1;
    while(t--)
    {
        solve();
    }
}