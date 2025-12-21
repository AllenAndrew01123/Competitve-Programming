#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<" "<<n/2<<endl;
        return;
    }
    for(int i=3;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ll temp=n/i;
            cout<<temp<<" "<<temp*(i-1)<<endl;
            return;
        }
    }
    cout<<1<<" "<<n-1<<endl;

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