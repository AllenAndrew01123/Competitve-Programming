#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<vector<ll>> dp(61, vector<ll>(61, 0));
void calc()
{
    dp[0][0] = 1;
    dp[1][0] = 1;
    dp[1][1] = 1;
    for (int i = 2; i <= 60; i++)
    {
        dp[i][0] = 1;
        for (int j = 1; j <= i; j++)
            dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
    }
}
void solve()
{
    ll a, b, k;
    cin >> a >> b >> k;
    vector<char> s(a + b);
    ll acnt = a;
    ll bcnt = b;
    for (int i = 0; i < a + b; i++)
    {
        // cout << acnt << " " << bcnt << " " << dp[acnt + bcnt - 1][acnt - 1] << " " << k << endl;
        if (dp[acnt + bcnt - 1][acnt - 1] < k && acnt && bcnt)
        {
            s[i] = 'b';
            k -= dp[acnt + bcnt - 1][acnt - 1];
            bcnt--;
        }
        else if (dp[acnt + bcnt - 1][acnt - 1] >= k && acnt && bcnt)
        {
            s[i] = 'a';
            acnt--;
        }
        else
        {
            for (int j = i; j < a + b; j++)
            {
                if (acnt)
                {
                    s[j] = 'a';
                    acnt--;
                }
                else
                    s[j] = 'b';
            }
            break;
        }
    }
    for (auto c : s)
        cout << c;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    calc();
        int t = 1;
    while (t--)
    {
        solve();
    }
}