#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n,k;cin>>n>>k;
    vector<ll> both,alice,bob;
    for(int i=1;i<=n;i++)
    {
        ll x,y,z;cin>>x>>y>>z;
        if(y==1 && z==1)
        both.push_back(x);
        else if(y==1)
        alice.push_back(x);
        else if(z==1)
        bob.push_back(x);
    }
    if(both.size()+min(alice.size(),bob.size())<k)
    {
        cout<<-1<<endl;
        return 0;
    }
    sort(alice.begin(),alice.end());
    sort(bob.begin(),bob.end());
    for(int i=0;i<min(alice.size(),bob.size());i++)
    {
        both.push_back(alice[i]+bob[i]);
    }
    sort(both.begin(),both.end());
    cout<<accumulate(both.begin(),both.begin()+k,0)<<endl;
}