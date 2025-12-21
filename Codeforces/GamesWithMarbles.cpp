#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
bool cmp(pair<ll,ll>&a,pair<ll,ll>&b)
{
    return a.first+a.second>b.first+b.second;
}
void solve()
{
    ll n;cin>>n;
    ll a[n],b[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    vector<pair<ll,ll>>v(n);
    for(int i=0;i<n;i++)
    v[i]={a[i],b[i]};
    sort(v.begin(),v.end(),cmp);
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        ans+=v[i].first;
        else
        ans-=v[i].second;
    }
    cout<<ans-(n&1)<<endl;
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