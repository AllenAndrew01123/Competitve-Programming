// #include<bits/stdc++.h>
// using namespace std;
// #define F(i,a,b) for(int i=a;i<b;i++)
// bool positive(int a[],int n)
// {
//     int i=0,c=0;
//     for(;i<n;i++)
//     {
//         if(a[i]<0)
//         {
//             cout<<"NO\n";
//             return false;  
//         }
//         if(a[i]==0)
//         c++; 
//     }
//     if(c==n)
//     {
//         cout<<"YES\n";
//         return false;
//     } 
//     return true;
// }
// main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     int t;cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int a[n];
//         F(i,0,n)cin>>a[i];
//         while(positive(a,n))
//         {
//             int max=0;
//             int idx;
//             F(i,1,n-1)
//             {
//                if(a[i]>max)
//                {
//                 max=a[i];
//                 idx=i;
//                }
//             }
//             a[idx-1]=a[idx-1]-1;
//             a[idx]=a[idx]-2;
//             a[idx+1]=a[idx+1]-1;
//         }  
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int n,m,k,a[200005],b[200005];
int main(){
	int t;cin>>t;
	while(t--){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=2;i<=n-1;i++){
		while(a[i-1]>0){
			a[i]-=2*a[i-1];a[i+1]-=a[i-1];a[i-1]=0;
		}
	}bool ok=1;
	for(int i=1;i<=n;i++){
		if(a[i]!=0){
			ok=0;break;
		}
	}
	if(ok)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	}
	return 0;
}