#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n,a,b,k;cin>>n>>a>>b>>k;
    vector<ll>v;
    ll wins=0;
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;
        if(x%(a+b)==0)
        {
            v.push_back((b+a-1)/a);
        }
        else if(x%(a+b)>a)
        {
            ll ex=(x%(a+b))-a;
            v.push_back((ex+a-1)/a);
        }
        else
        wins++;
    }
    sort(v.begin(),v.end());
    for(auto x:v)
    {
        if(k>=x)
        {
            wins++;
            k-=x;
        }
        else
        break;
    }
    cout<<wins<<endl;
}