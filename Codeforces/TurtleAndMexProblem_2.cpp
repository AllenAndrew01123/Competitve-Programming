#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,m;cin>>n>>m;
    ll mx=0;
    for(int i=0;i<n;i++)
    {
        ll l;cin>>l;
        set<ll>s;
        for(int i=0;i<l;i++)
        {
            ll x;
            cin>>x;
            s.insert(x);
        }
        ll mex1=0;
        for(auto x:s)
        {
            if(x==mex1)
            mex1++;
            else
            break;
        }
        s.insert(mex1);
        ll mex2=0;
        for(auto x:s)
        {
            if(x==mex2)
            mex2++;
            else
            break;
        }
        mx=max(mx,mex2);
    }
    ll sum=(m>=mx)?(mx*(mx+1)+(m-mx)*mx+(m-mx)*(m-mx+1)/2):((m+1)*mx);
    cout<<sum<<endl;


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