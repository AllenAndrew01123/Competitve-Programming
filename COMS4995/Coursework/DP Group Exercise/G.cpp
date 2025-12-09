#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll suma = 0, sumb = 0;
    vector<ll> dp(n, 0);
    if(s[0]=='a')
    suma++;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == 'a')
        {
            suma++;
            dp[i] = dp[i - 1];
        }
        else if (s[i] == 'b')
        {
            sumb += suma;
            dp[i] = dp[i - 1];
        }
        else if (s[i] == 'c')
        {
            dp[i] = dp[i - 1] + sumb;
        }
        else
        {
            dp[i]=dp[i-1]+sumb;
            sumb+=suma;
            suma++;
        }
    }
    for(auto x:dp)
    cout<<x<<endl;
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