#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    ll a=v[0]/3;
    ll c=v[n-1]/3;
    ll b=v[1]-2*a;
    cout<<a<<" "<<b<<" "<<c<<endl;
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