#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll r, g, b;
    cin >> r >> g >> b;
    ll ans=LLONG_MIN;
    for (int i = 0; i <= min({r, g, b, 2LL}); i++)
    {
       ll sum=i;
       sum+=(r-i)/3+(g-i)/3+(b-i)/3;
       ans=max(ans,sum);
    }
    cout << ans << endl;
}