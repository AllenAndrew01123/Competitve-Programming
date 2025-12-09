#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll r, x, d, n;
    cin >> r >> x >> d >> n;
    string s;cin>>s;
    ll ans=0;
    for(auto c:s)
    {
        if(c=='1')
        {
            ans++;
            r-=d;
            r=max(0LL,r);
        }
        if(c=='2')
        {
            if(r<x)
            {
                ans++;
                r-=d;
                r=max(0LL,r);
            }
        }
    }
    cout<<ans<<endl;
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
