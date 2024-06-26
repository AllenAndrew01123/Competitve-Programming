#include<bits/stdc++.h>
using namespace std;

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                cin >> a[i][j];
            }   
        }
        if(__gcd(a[0][0],a[n-1][m-1])==1)
        {
            cout<<1<<endl;
            continue;
        }
        int dp[n][m];
        // int upperbound1=max(__gcd(a[0][0],a[0][1]),__gcd(a[0][0],a[1][0]));
        dp[0][0] = a[0][0];
        int upperbound=max(__gcd(a[n-2][m-1],a[n-1][m-1]),__gcd(a[n-1][m-2],a[n-1][m-1]));
        // cout<<upperbound<<endl;
        for(int i = 1; i < n; ++i) {
            dp[i][0] = __gcd(dp[i - 1][0], a[i][0]);
        }
        for(int j = 1; j < m; ++j) {
            dp[0][j] = __gcd(dp[0][j - 1], a[0][j]);
        }
        for(int i = 1; i < n; ++i) {
            for(int j = 1; j < m; ++j) {
                dp[i][j] = max(__gcd(upperbound, __gcd(dp[i-1][j], a[i][j])),__gcd(upperbound, __gcd(dp[i][j - 1], a[i][j])));
            }
        }
        // for(int i = 0; i < n; ++i) {
        //     for(int j = 0; j < m; ++j) {
        //         cout<< dp[i][j]<<" ";
        //     }  
        //     cout<<endl; 
        // }
        cout << dp[n - 1][m - 1] << '\n';
    }
    return 0;
}