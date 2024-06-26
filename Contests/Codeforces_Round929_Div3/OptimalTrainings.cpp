// #include<bits/stdc++.h>
// using namespace std;
// main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//        int n;
//        cin>>n;
//        int arr[n];
//        int i=0;
//        long long sum[n];
//        cin>>arr[i];
//        sum[0]=arr[i];
//        i++;
//        for(;i<n;i++)
//        {
//         cin>>arr[i];
//         sum[i]=arr[i]+sum[i-1];
//        }
//        int q;
//        cin>>q;
//        while(q--)
//        {
//         int l,u;
//         cin>>l>>u;
//         int r=l-1;
//         while(r<n)
//         {
//            long long vf;
//            if(l==1)
//            vf=sum[r];
//            else
//            vf=sum[r]-sum[l-2];
//            if(vf>u)
//            break; 
//            r++;
//         }
//         if(r==l-1)
//         cout<<r+1<<" ";
//         else
//         cout<<r<<" ";
//        }
//     cout<<"\n";
//    }
// }  
//////////BINARY SEARCH/////
#include "bits/stdc++.h"
using namespace std;
#define int long long 
#define double long double

void solve(int tc) {
  int n;
  cin >> n;
  int a[n + 1];
  for(int i = 1; i <= n; i++) cin >> a[i];
  int ps[n + 1];
  ps[0] = 0;
  for(int i = 1; i <= n; i++) ps[i] = ps[i - 1] + a[i];
  int q;
  cin >> q;
  while(q--) {
    int l, u;
    cin >> l >> u;
    int lb = l, rb = n;
    while(lb < rb) {
      int mid = (lb + rb + 1) >> 1;
      if(ps[mid] - ps[l - 1] <= u) lb = mid;
      else rb = mid - 1;
    }
    int maxu = -1e18, optid;
    for(int i = max(l, lb - 2); i <= min(n, lb + 2); i++) {
      int t = ps[i] - ps[l - 1];
      int ut = (u + (u - t + 1)) * t / 2;
      if(ut > maxu) {
        maxu = ut;
        optid = i;
      }
    }
    cout << optid << " ";
  }
}

signed main() {
  int t = 1; cin >> t;
  for(int i = 1; i <= t; i++){
    solve(i);
    cout << "\n";
  }
}