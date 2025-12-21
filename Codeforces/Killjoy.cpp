#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    ll n,x,k;cin>>n>>x;
    ll y=0;
    ll a[n];
    bool flag=false;
    for(int i=0;i<=n-1;i++)
    {
        cin>>a[i];
        if(a[i]==x)
        flag=true;
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        y+=x-a[i];
    }
    if(y==0 && a[n-1]==x)
    cout<<0<<endl;
    else if((x-a[n-1]+y==0)||flag)
    cout<<1<<endl;
    else
    cout<<2<<endl;
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