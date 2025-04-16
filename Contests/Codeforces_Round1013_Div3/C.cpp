#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    if(n%2==0)
    cout<<-1;
    else
    {
        for(int i=n;i>=1;i--)
        cout<<i<<" ";
    }
    cout<<endl;
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