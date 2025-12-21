#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,q;cin>>n>>q;
    vector<ll>v(n+1,0),pref1(n+1,0),queries(q+1,0),pref2(q+1,0);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        pref1[i]=pref1[i-1]+v[i];
    }
    for(int i=1;i<=q;i++)
    {
        cin>>queries[i];
        pref2[i]=pref2[i-1]+queries[i];
        if(pref2[i]>=pref1[n])
        pref2[i]=0;
        cout<<n-(upper_bound(pref1.begin(),pref1.end(),pref2[i])-pref1.begin())+1<<endl;
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}