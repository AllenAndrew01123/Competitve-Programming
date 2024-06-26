// #include<bits/stdc++.h>
// using namespace std;
// main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     int n;cin>>n;
//     int a[n];
//     cin>>a[0];
//     int mx=a[0],count=1,maxcount=1;
//     int i=1;
//     while(cin>>a[i])
//     {
//         if(a[i]>=mx)
//         {
//             count++;
//             mx=a[i];
//         }
//         else
//         {
//             mx=a[i];
//             if(count>maxcount)
//             maxcount=count;
//             count=1;
//         }
//         i++;

//     }
//     cout<<max(maxcount,count);
// }
#include <iostream>
using namespace std;
int n,m,l,t,pt;
 
int main(){
	cin>>n;
	for(;cin>>t;pt=t,(m=(l>m)?l:m))
		(pt>t)?l=1:l++;
	cout << m;
}