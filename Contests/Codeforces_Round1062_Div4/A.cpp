#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll a,b,c,d;cin>>a>>b>>c>>d;
    if(a==b&&a==c&&a==d&&b==c&&b==d&&c==d)
    cout<<"YES\n";
    else
    cout<<"NO\n";
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