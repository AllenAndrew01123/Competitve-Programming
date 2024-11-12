#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    ll n, k;
    cin >> n >> k;
    map<ll, ll> mp;
    for(int i = 0; i < n; ++i) {
         ll x;
        cin >> x;
        mp[x]++;
    }
    ll cnt = 0;
    for(auto x:mp)
    {
        if(k==1)
        {
            cnt+=x.second/2;
        }
        else if(mp[x.first*k]>0)
        {
            cnt+=min(x.second,mp[x.first*k]);
            mp[x.first*k]=max(mp[x.first*k]-x.second,0LL);
        }
    }
    cout << cnt;
return 0;
}
