// #include <bits/stdc++.h>
// using namespace std;
// main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> dp(n + 1, vector<int>(2, 0));
//     dp[0][0] = 1, dp[0][1] = 1;
//     for (int i = 0; i <= n; i++)
//     {
//             for (int j = i + 1; j <= i + m &&j <= n; j++)
//             {
//                 dp[j][1] += dp[i][0];
//             }
//             for (int j = i + 1; j <= i + m && j <= n; j++)
//             {
//                 dp[j][0] += dp[i][1];
//             }
//     }
//     cout << dp[n][0] + dp[n][1];
// }
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int s=0;
        int n;
        cin>>n;
        int arr[n];
        cin>>arr[0];
        for(int i=1;i<n;i++){
            cin>>arr[i];
            if(arr[i]-arr[i-1]<=1){
                s=i;
            }
            else break;
        }
        if(s==(n-1)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}