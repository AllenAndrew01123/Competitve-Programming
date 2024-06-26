#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,k,q;cin>>n>>k>>q;
    ll a[k+1]={0};
    ll b[k+1]={0};
    for(int i=1;i<=k;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=k;i++)
    {
        cin>>b[i];
    }
    while(q--)
    {
        ll d;cin>>d;
        ll pos=lower_bound(a,a+k+1,d)-a;
        if(a[pos]==d)
        {
            cout<<b[pos]<<" ";
            continue;
        }
        ll time=b[pos-1]+((d-a[pos-1])*(b[pos]-b[pos-1]))/(a[pos]-a[pos-1]);
        cout<<time<<" ";
    }
    cout<<endl;
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