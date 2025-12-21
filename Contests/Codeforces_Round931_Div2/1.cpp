#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    ll a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0;
    sort(a+1,a+n+1);
    cout<<a[n-1]-a[1]+a[n-1]-a[2]+a[n]-a[1]+a[n]-a[2]<<endl;
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
