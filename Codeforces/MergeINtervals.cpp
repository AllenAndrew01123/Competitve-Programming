#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;cin>>n;
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++)
    {
        int a,b;cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    ll st=v[0].first,end=v[0].second;
    for(int i=1;i<n;i++)
    {
        if(end>=v[i].first)
        end=max(end,v[i].second);
        else
        {
            cout<<st<<" "<<end<<endl;
            st=v[i].first;
            end=v[i].second;
        }

    }
    cout<<st<<" "<<end<<endl;

}