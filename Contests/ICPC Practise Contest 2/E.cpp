#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll a,b,x,y;cin>>a>>b>>x>>y;
    double x1=(x*y+b*x)*1.0/b;
    double y1=(a*y-x*y)*1.0/b;
    double 
    if(x1<=x+b||y1<=y+b||)
    cout<<"yes\n";
    else
    cout<<"no\n";
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