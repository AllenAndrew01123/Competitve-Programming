#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,m,l,r;
    cin>>n>>m>>l>>r;
    if(m<=r)
    cout<<0<<" "<<m<<endl;
    else
    cout<<r-m<<" "<<r<<endl;
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