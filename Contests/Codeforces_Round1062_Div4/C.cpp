#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    vector<ll>odd,even,full;
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;
        full.push_back(x);
        if(x&1)
        odd.push_back(x);
        else
        even.push_back(x);
    }
    if(odd.size()==0)
    {
        for(auto x:even)
        cout<<x<<" ";
        cout<<endl;
        return;
    }
    else if(even.size()==0)
    {
        for(auto x:odd)
        cout<<x<<" ";
        cout<<endl;
        return;
    }
    else
    {
        sort(full.begin(),full.end());
        for(auto x:full)
        cout<<x<<" ";
        cout<<endl;
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