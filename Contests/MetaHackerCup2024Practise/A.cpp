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
    sort(arr,arr+n);
    ll ans=2*(max((n-2),0LL))*arr[0]+arr[0];
    if(ans<=k)
    cout<<"YES";
    else
    cout<<"NO";
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("walk_the_line_input.txt", "r", stdin);
    freopen("file_name.out", "w", stdout);
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": ";
        solve();
        cout<<endl;
    }
}