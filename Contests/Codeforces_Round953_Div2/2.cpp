#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,a,b;cin>>n>>a>>b;
    if(b<=a)
    {
        cout<<n*a<<endl;
        return;
    }
    else
    {
        ll diff=b-a;
        if(diff<=n)
        cout<<n*a+diff*(diff+1)/2<<endl;
        else
        {
            ll low=b-n+1;
            cout<<n*(b+low)/2<<endl;
        }
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