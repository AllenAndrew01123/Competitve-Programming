#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,m,k;cin>>n>>m>>k;
    ll left=1,right=m;
    ll ans=k;
    while(left<=right)
    {
        ll mid=right-(right-left)/2;
        ll capacity;
        ll a=m/(mid+1);
        capacity=a*mid;
        capacity+=m%(mid+1);
        if(n*capacity>=k)
        {
            ans=mid;
            right=mid-1;
        }
        else
        left=mid+1;
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