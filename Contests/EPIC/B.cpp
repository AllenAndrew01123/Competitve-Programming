#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;cin>>n;
    ll sz=log2(n)+1;
    vector<vector<ll>> v(sz);
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v[0].push_back(a[i]);
    }
    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=0;j<v[i].size();j+=2)
        {
            v[i+1].push_back(max(v[i][j],v[i][j+1]));
        }
    }
    map<ll,ll> mp;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            mp[v[i][j]]++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<mp[a[i]]-1<<" ";
    }
}