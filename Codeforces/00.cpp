#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,d,k;
    cin>>n>>d>>k;
    ll l=1,r=1e18;
    ll ans=r;
    while(l<=r)
    {
        ll mid=r-(r-l)/2;
        ll m=0;
        ll sum=0;
        for(int i=1;i<=d;i++)
        {
            sum+=max((n-m)/mid,k);
            m+=max((n-m)/mid,k);
        }
        if(sum>=n)
        {
            ans=mid;
            l=mid+1;
        }
        else
        r=mid-1;
    }
    cout<<ans<<endl;

}
int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

}