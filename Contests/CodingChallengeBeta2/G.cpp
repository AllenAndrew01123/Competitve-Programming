#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll x1,x2,d;cin>>x1>>x2>>d;
    if(x1==0 && x2==0)
    {
        if(d==0)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        return;
    }
    ll a=x1+x2;
    ll b=abs(x1-x2);
    if(d%(__gcd(a,b))==0)
    cout<<"YES\n";
    else
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