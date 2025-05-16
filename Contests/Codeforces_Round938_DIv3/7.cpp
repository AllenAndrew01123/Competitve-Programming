#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> arr(n, vector<ll>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    ll G = __gcd(arr[0][0], arr[n-1][m-1]);
    vector<ll> divs;
    for (ll i = 1; i * i <= G; i++) {
        if (G % i == 0) {
            divs.push_back(i);
            if (i * i != G) divs.push_back(G / i);
        }
    }
    sort(divs.rbegin(), divs.rend());
    vector<vector<char>> check(n, vector<char>(m));
    vector<vector<char>> dp(n,    vector<char>(m));

    ll ans = 0;
    for (ll d : divs) {
        for (int i = 0; i < n; i++) {
            memset(check[i].data(), 0, m * sizeof(char));
            memset(   dp[i].data(), 0, m * sizeof(char));
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (arr[i][j] % d == 0)
                    check[i][j] = 1;

        dp[0][0] = check[0][0];
        for (int i = 1; i < n; i++)
            dp[i][0] = dp[i-1][0] && check[i][0];
        for (int j = 1; j < m; j++)
            dp[0][j] = dp[0][j-1] && check[0][j];

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (check[i][j])
                    dp[i][j] = dp[i-1][j] || dp[i][j-1];
            }
        }
        if (dp[n-1][m-1]) {
            ans = d;
            break;
        }
    }
    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) 
        solve();
    return 0;
}
