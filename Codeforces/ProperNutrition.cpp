#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,a,b;cin>>n>>a>>b;
    for(int i=0;i<=n/a;i++)
    {
        if((n-a*i)%b==0)
        {
            cout<<"YES\n";
            cout<<i<<" "<<(n-i*a)/b<<endl;
            return;
        }
    }
    cout<<"NO\n";
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
