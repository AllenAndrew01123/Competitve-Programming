#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,m;cin>>n>>m;
    vector<pair<ll,ll>>v(n);
    for(int i=0;i<n;i++)
    {
        ll l;cin>>l;
        map<ll,ll>mp;
        for(int i=0;i<l;i++)
        {
            ll x;
            cin>>x;
            mp[x]++;
        }
        ll mex1=0;
        for(auto x:mp)
        {
            if(x.first==mex1)
            mex1++;
            else
            break;
        }
        mp[mex1]++;
        ll mex2=0;
        for(auto x:mp)
        {
            if(x.first==mex2)
            mex2++;
            else
            break;
        }
        v[i]={mex1,mex2};
    }
    sort(v.begin(),v.end());
    map<ll,ll>mp2;
    for(int i=0;i<n;i++)
    {
        mp2[v[i].first]=v[i].second;
    }
    for(auto x:mp2)
    cout<<x.first<<" "<<x.second<<endl;
    ll sum=0;
    for(int i=0;i<=m;i++)
    {
        ll x=i;
        while(true)
        {
            if(mp2.find(x)==mp2.end())
                break;
            else
                x=mp2[x];
        }
        sum+=x;
    }
    cout<<sum<<endl;
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