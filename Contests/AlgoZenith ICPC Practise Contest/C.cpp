#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll LPS(string S) {
        int dp[S.length()][S.length()];
        
        for (int i = S.length() - 1; i >= 0; i--) {
            dp[i][i] = 1;
            for (int j = i+1; j < S.length(); j++) {
                if (S[i] == S[j]) {
                    dp[i][j] = dp[i+1][j-1] + 2;
                } else {
                    dp[i][j] = max(dp[i+1][j], dp[i][j-1]);
                }
            }
        }
        return dp[0][S.length()-1];
 }
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    string sfull = s1 + s2;
    ll ans = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s2.find(s1[i]) < s2.length())
        {
            ll nextidx = s2.rfind(s1[i]);
            string sub=sfull.substr(i,s1.length()-i+nextidx+1);
            ans=max(ans,LPS(sub));
        }
    }
    cout<<ans<<endl;
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
