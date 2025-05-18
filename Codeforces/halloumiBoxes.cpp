#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,k;cin>>n>>k;
    ll arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    if(k>=2)
    cout<<"YES\n";
    else
    {
        if(k==1&& is_sorted(arr,arr+n))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }

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
