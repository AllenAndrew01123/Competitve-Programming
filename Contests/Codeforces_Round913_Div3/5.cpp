#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int calc[10]={1,3,6,10,15,21,28,36,45,55};
void solve()
{
    ll n;cin>>n;
    ll ans=1;
    while(n>0)
    {
        int digit=n%10;
        ans*=calc[digit];
        n/=10;
    }
    cout<<ans<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}