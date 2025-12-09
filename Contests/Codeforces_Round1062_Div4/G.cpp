#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
typedef long long ll;
#define mod 1000000007
using namespace __gnu_pbds;
template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), c(n);
    ordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    for (int i = 0; i < n; i++)
        cin >> c[i];
    int m = s.size();
    vector<vector<int>> dp(n, vector<int>(m));
    for (int j = 0; j < m; j++)
    {
        int val = *s.find_by_order(j);
        if (a[0] == val)
            dp[0][j] = 0;
        else
            dp[0][j] = c[0];
    }
    for (int i = 1; i < n; i++)
    {
        vector<int> pref(m);
        pref[0] = dp[i - 1][0];
        for (int j = 1; j < m; j++)
        {
            if (dp[i - 1][j] < pref[j - 1])
                pref[j] = dp[i - 1][j];
            else
                pref[j] = pref[j - 1];
        }

        for (int j = 0; j < m; j++)
        {
            int val = *s.find_by_order(j);
            int cost;
            if (a[i] == val)
                cost = 0;
            else
                cost = c[i];
            dp[i][j] = pref[j] + cost;
        }
    }
    cout << *min_element(dp[n - 1].begin(), dp[n - 1].end()) << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
        solve();
}
