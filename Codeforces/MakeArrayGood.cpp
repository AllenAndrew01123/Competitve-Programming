#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=31;j>=0;j--)
        {
            if((v[i]>>j)&1)
            {
                cout<<(i+1)<<" "<<(1<<(j+1))-v[i]<<endl;
                break;
            }
        }
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}