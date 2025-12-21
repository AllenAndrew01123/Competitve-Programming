#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll p, f;
    cin >> p >> f;
    ll cs, cw;
    cin >> cs >> cw;
    ll ws, ww;
    cin >> ws >> ww;
    if (p < f)
        swap(p, f);
    ll ans = LLONG_MIN;
    for (int i = 0; i <= cs; i++)
    {
        if (i * ws > p)
            break;
        ll a1 = i;
        ll b1 = (p - a1 * ws) / ww;
        ll a2=min(cs-i,f/ws);
        ll b2=min(cw-b1,(f-a2*ws)/ww);
        ans=max(ans,a1+a2+b1+b2);
    }
    for (int i = 0; i <= cw; i++)
    {
        if (i * ww > p)
            break;
        ll a1 = i;
        ll b1 = (p - a1 * ww) / ws;
        ll a2=min(cw-i,f/ww);
        ll b2=min(cs-b1,(f-a2*ww)/ws);
        ans=max(ans,a1+a2+b1+b2);
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