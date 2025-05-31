#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, 0));
    for (int i = 1; i <= n; i++)
        dp[i][1] = 1;
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
