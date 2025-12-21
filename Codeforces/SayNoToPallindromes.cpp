#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<vector<ll>> v(6, vector<ll>(n + 1, 0));
    string t = "abc";
    int row = 0;
    do
    {
        for (int i = 1; i <= n; i++)
        {
            if (s[i - 1] == t[(i - 1) % 3])
                v[row][i] = v[row][i - 1];
            else
                v[row][i] = v[row][i - 1] + 1;
        }
        row++;
    } while (next_permutation(t.begin(), t.end()));
    while (m--)
    {
        ll l, r;
        cin >> l >> r;
        ll ans = LLONG_MAX;
        for (int i = 0; i < 6; i++)
        {
            ans = min(ans, v[i][r] - v[i][l - 1]);
        }
        cout << ans << endl;
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}