#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    ll sum=0,cnt0=0;    
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;
        if(x==0)
        cnt0++;
        sum+=x;
    }
    cout<<min(n-cnt0,sum-n+1)<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
