#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    map<ll,ll>mp;
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;
        mp[x]++;
        if(mp[x]>1)
        mp[x+1]++;
    }
    cout<<mp.size()<<endl;
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