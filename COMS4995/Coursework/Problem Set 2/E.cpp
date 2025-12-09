#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    if(n&1)
    {
        cout<<0<<endl;
        return;
    }
    cout<<(1<<(n/2))<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}