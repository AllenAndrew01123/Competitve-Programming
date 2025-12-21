#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    int t,n;
    cin >>  t;
    while(t--){
        cin >> n;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            sum += arr[i];
        }
        if(sum&1){
            cout << "False" << "\n";
            continue;
        }
        vector<int> dp(sum+1,0);
        int target=sum/2;
        dp[0]=1;
        for(int i=0;i<n;i++){
            for(int x=target;x>0;x--){
                if(x-arr[i]>=0){
                    dp[x] |= dp[x-arr[i]]; 
                }
            }
        }
        if(dp[target])
            cout << "True\n";
        else
            cout << "False\n";
}

}