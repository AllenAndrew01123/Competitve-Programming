#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, m, k;
    cin >> n >> m >> k;
    ll l = 1, r = 1e12;
    ll ans;
    while (l <= r)
    {
        ll mid = r - (r - l) / 2;
        ll cnt = 0;
        for (ll i = 1; i <= n; i++)
            cnt += min(mid / i, m);
        if(cnt>=k)
        {
            ans=mid;
            r=mid-1;
        }
        else
        l=mid+1;
    }
    cout<<ans<<endl;
}