#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll dp[300001];
void calc()
{
    for(int i=0;i<=9;i++)
    {
        dp[i]=1;
    }
    for(int i=10;i<=300000;i++)
    {
        dp[i]=(dp[i-9]%mod+dp[i-10]%mod)%mod;
    }
}
void solve()
{
    ll n,m;cin>>n>>m;
    ll ans=0;
    while(n>0)
    {
        ans=(ans%mod+dp[n%10+m]%mod)%mod;
        n/=10;
    }
    cout<<ans<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    calc();
    while (t--)
    {
        solve();
    }
}