#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n,m;cin>>n>>m;
    ll a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    if(n>m)
    cout<<0<<endl;
    else
    {
        ll ans=1;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                ans=((ans%m)*abs(a[i]-a[j])%m)%m;
            }
        }
        cout<<ans<<endl;
    }

}