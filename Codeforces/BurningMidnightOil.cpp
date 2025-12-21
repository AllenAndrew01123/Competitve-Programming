#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll check(ll mid,ll k)
{
    ll i=1;
    ll sum=0;
    while(mid/i>0)
    {
        sum+=mid/i;
        i*=k;
    }
    return sum;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;cin>>n;
    ll k;cin>>k;
    ll l=1;
    ll r=1e9;
    while(l<r)
    {
        ll mid=(l+r)/2;
        if(check(mid,k)<n)
        l=mid+1;
        else
        r=mid;
    }
    cout<<l;

}