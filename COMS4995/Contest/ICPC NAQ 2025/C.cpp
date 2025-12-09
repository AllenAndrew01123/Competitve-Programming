#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,k;cin>>n>>k;
    set<ll>s;
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;
        s.insert(x);
    }
    cout<<min(k,ll(s.size()))<<endl;
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