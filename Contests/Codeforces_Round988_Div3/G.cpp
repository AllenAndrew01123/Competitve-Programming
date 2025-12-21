#include <bits/stdc++.h>
using namespace std;
#define mod 998244353
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    map<ll,vector<ll>>mp;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        for (ll d = 2; d * d <= x; d++)
        {
            if (x % d == 0)
            {
                mp[d].push_back(i);
                while (x % d == 0)
                {
                    x /= d;
                }
            }
        }
        if (x > 1)
            mp[x].push_back(i);
    }
    vector<ll>dp(n+1,0);
    for(auto x:mp)
    {
        for(int i=1;i<x.second.size();i++)
        {
            dp[x.second[i]]=((dp[x.second[i]]%mod+dp[x.second[i-1]])%mod+i%mod)%mod;
        }
    }
    cout<<dp[n]<<endl;

}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
}