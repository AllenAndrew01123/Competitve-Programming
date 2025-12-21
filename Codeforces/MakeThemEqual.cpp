#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n],c[n];
    vector<pair<ll,ll>>p;
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;
        ll lg=log2(x);
        a[i]=lg+__builtin_popcount(x-pow(2,lg));
        cout<<a[i]<<endl;
    }
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
    }
    for(int i=0;i<n;i++)
    {
        p[i]={c[i],a[i]};
    }
    sort(p.begin(),p.end(),greater<int>());
    ll ans=LONG_LONG_MIN;
    ll temp=k;
    for(int i=0;i<n;i++)
    {
    }


    
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