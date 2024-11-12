#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,m;cin>>n>>m;
    ll arr[n*m];
    for(int i=0;i<n*m;i++)
    cin>>arr[i];
    sort(arr,arr+m*n);
    ll min1=arr[0];
    ll min2=arr[1];
    ll max1=arr[n*m-1];
    ll max2=arr[n*m-2];
    ll t2=min(n,m);
    cout<<max((t2-1)*abs(min1-max2)+(n*m-t2)*abs(min1-max1),(t2-1)*abs(max1-min2)+(n*m-t2)*abs(max1-min1))<<endl;
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
