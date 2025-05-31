#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,a,b;cin>>n>>a>>b;
    if(n==a && a==b)
    {
        cout<<"YES\n";
        return;
    }
    if(a+b+2<=n)
    {
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
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