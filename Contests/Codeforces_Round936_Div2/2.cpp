// // #include<bits/stdc++.h>
// // using namespace std;
// // const int mod=1e9+7;
// // main()
// // {
// //     cin.tie(0)->sync_with_stdio(0);
// //     int t;cin>>t;
// //     while(t--)
// //     {
// //         int n,k;cin>>n>>k;
// //         int t=k;
// //         long long a[n];
// //         int i=0,neg=0;
// //         while(i<n)
// //         {
// //             cin>>a[i];
// //             if(a[i]<0)
// //             neg++;
// //             i++;
// //         }
// //         long long x=1;
// //         while(t--)
// //         {
// //             x=x*2%mod;
// //         }
// //         cout<<x<<endl;
// //         sort(a,a+n);
// //         long long sum=accumulate(a,a+n,0);
// //         if(sum>0 && neg==0)
// //         {
// //             long long p=((sum%mod)*(x%mod))%mod;
// //             cout<<p;
// //         }
// //         else if (sum>0 && neg>0)
// //         {
// //             long long p;
// //             if(k==1)
// //             p=sum%mod+(a[n-1]+1)%mod;
// //             else
// //             p=(((sum%mod)*(x%mod))%mod + (a[n-1]+1)%mod)%mod;
// //             cout<<p;
// //         }
// //         else
// //         {
// //             cout<<(sum%mod+mod)%mod;
// //         }
// //         cout<<endl;
// //     }
// // }
// #include<bits/stdc++.h>
// using namespace std;
// const int mod=1e9+7;
// int a[(int)2e5+5];
// int main(){
//     cin.tie(0)->sync_with_stdio(0);
//     int t,n,k;
//     cin>>t;
//     while(t--){
//         long long int x=1,sum=0,mn=0,mx=0;
//         cin>>n>>k;
//         while(k--)x=x*2%mod;
//         cout<<x<<endl;
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//             sum+=a[i];
//             mn=min(mn,sum);
//             mx=max(mx,sum-mn);
//         }
//         cout<<((sum+mx%mod*(x-1))%mod+mod)%mod<<'\n';
//     }
// }
#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int a[n];
        ll sum = 0;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }
        ll maxSum = 0, curSum = 0;
        for(int i = 0; i < n; ++i) {
            curSum += a[i];
            curSum = max(curSum, 0LL);
            maxSum = max(maxSum, curSum);
        }
        ll x = 1;
        while(k--) x = (x * 2) % MOD; 
        ll ans = ((sum+maxSum%MOD*(x-1))%MOD + MOD)%MOD;
        cout << ans << '\n';
    }
    return 0;
}