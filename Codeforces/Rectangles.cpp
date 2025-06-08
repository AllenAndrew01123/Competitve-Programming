#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    ll ans=n*m;
    for (int i = 0; i < n; i++)
    {
        ll sum = 0;
        for (int j = 0; j < m; j++)
            sum += arr[i][j];
        ans+=(1LL<<sum)+(1LL<<(m-sum))-2-m;
    }
    for (int j = 0; j < m; j++)
    {
        ll sum = 0;
        for (int i = 0; i < n; i++)
            sum += arr[i][j];
        ans+=(1LL<<sum)+(1LL<<(n-sum))-2-n;
    }
    cout<<ans<<endl;
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