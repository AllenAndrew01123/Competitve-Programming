#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,m,k;cin>>n>>m>>k;
    for(int i=n;i>=m+1;i--)
    {
        cout<<i<<" ";
    }
    for(int i=1;i<=m;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return;
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