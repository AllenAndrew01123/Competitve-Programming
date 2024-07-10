#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    ll sum=0;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i%2==0)
        sum+=a[i];
    }
    vector<ll>v1,v2;
    for(int i=1;i<n;i+=2)
    {
        v1.push_back(a[i]-a[i-1]);
    }
    for(int i=1;i<n-1;i+=2)
    {
        v2.push_back(a[i]-a[i+1]);
    }
    ll sum1=0,sum2=0,sum1b=0,sum2b=0;
    for(auto x:v1)
    {
        sum1=max(sum1+x,x);
        sum1b=max(sum1b,sum1);
    }
    for(auto x:v2)
    {
        sum2=max(sum2+x,x);
        sum2b=max(sum2b,sum2);
    }
    cout<<sum+max({sum1b,sum2b})<<endl;
    
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