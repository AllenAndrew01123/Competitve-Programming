#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    map<ll,ll>mp;
    mp[0]=0;
    ll mx=0;
    ll sum=0;
    ll ans=0;
    for(int i=1;i<=n;i++)
    {
        ll x;cin>>x;
        sum+=x;
        if(mp.find(sum)!=mp.end())
        {
            mx=max(mx,mp[sum]+1);
        }
        mp[sum]=i;
        ans+=i-mx;
    }
    cout<<ans<<endl;
}