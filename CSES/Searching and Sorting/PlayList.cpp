#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    map<ll, ll> mp;
    ll left = 1;
    ll ans = 0;
    ll i;
    for (i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (mp.find(x) == mp.end())
            mp[x] = i;
        else
        {
            if(left<=mp[x])
            {
                ans=max(ans,i-left);
                left=mp[x]+1;
                mp[x]=i;
            }
            else
            {
                mp[x]=i;
            }
        }
    }
    ans=max(ans,i-left);
    if(ans==0)
    cout<<n<<endl;
    else
    cout<<ans<<endl;
}