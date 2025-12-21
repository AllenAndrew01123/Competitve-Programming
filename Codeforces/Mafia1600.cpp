#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ll sum = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        mx = max(mx, a[i]);
    }
    ll l=1,r=1e12;
    ll an=r;
    while(l<=r)
    {
        ll mid = r - (r - l) / 2;
        if((mid<=n*mid-sum)&&(mid>=mx))
        {
            an=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout << an << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}