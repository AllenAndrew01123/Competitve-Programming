#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll aans, bans, cans;
    ll res = LLONG_MAX;
    for (ll anew = 1; anew <= 10000; anew++)
    {
        ll fact=1;
        for(;anew*fact<=20000;fact++)
        {
            ll bnew=anew*fact;
            ll c1=floor(c*1.0/bnew)*bnew;
            ll c2=ceil(c*1.0/bnew)*bnew;
            if(abs(a-anew)+abs(b-bnew)+abs(c1-c)<res)
            {
                res=abs(a-anew)+abs(b-bnew)+abs(c1-c);
                aans=anew;
                bans=bnew;
                cans=c1;
            }
            if(abs(a-anew)+abs(b-bnew)+abs(c2-c)<res)
            {
                res=abs(a-anew)+abs(b-bnew)+abs(c2-c);
                aans=anew;
                bans=bnew;
                cans=c2;
            }
        }
    }
    cout<<res<<endl;
    cout<<aans<<" "<<bans<<" "<<cans<<endl;
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