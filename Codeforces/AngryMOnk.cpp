#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,k;cin>>n>>k;
    ll a[k];
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
    }
    sort(a,a+k);
    ll a1=0,b1=0;
    for(int i=0;i<k-1;i++)
    {
        if(a[i]>1)
        a1+=a[i]-1;
        b1+=a[i];
    }
    cout<<a1+b1<<endl;
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