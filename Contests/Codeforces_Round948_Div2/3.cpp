#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    ll n;cin>>n;
    ll lcm=1;
    map<ll,ll>mp;
    vector<ll> v;
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;
        v[i]=x;
        lcm=(lcm*x)/__gcd(lcm,x);
        mp[x]++;
    }
    cout<<lcm<<endl;
    map<ll, ll>::reverse_iterator itr;
    map<ll,ll>::iterator it;
    ll ans=n;
    for(itr = mp.rbegin(); itr != mp.rend(); itr++)
    {
        cout<<lcm<<" "<<itr->first<<endl;
        if(lcm==itr->first)
        {
            
        }
        else
        {
            cout<<ans<<endl;
            return;
        }
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