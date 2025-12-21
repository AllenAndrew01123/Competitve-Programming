#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;cin>>n;
    vector<ll> dig;
    while(n>0)
    {
        dig.push_back(n%10);
        n/=10;
    }
    reverse(dig.begin(),dig.end());
    ll ans=1;
    for(int i=0;i<dig.size();i++)
    ans*=dig[i];
    for(int i=0;i<dig.size()-1;i++)
    {
        ll mul=1;
        for(int j=0;j<i;j++)
        mul*=dig[j];
        if(dig[i]>1)
        {
            mul*=dig[i]-1;
            for(int j=i+1;j<dig.size();j++)
            mul*=9;
        }
        else if(dig[i]==1 && i==0)
        {
            for(int j=i+1;j<dig.size();j++)
            mul*=9;
        }
        ans=max(ans,mul);
    }
    cout<<ans<<endl;
}