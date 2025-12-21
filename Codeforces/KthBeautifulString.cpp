// #include<bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     int n;cin>>n;
//     int k;cin>>k;
//     string s(n,'a');
//     for(int i=n-2;i>=0;i--)
//     {
//         if(k<=n-1-i)
//         {
//             s[i]='b';
//             s[n-k]='b';
//             cout<<s<<endl;
//             return;
//         }
//         k-=(n-i-1);
//     }
    
// }
// int main()
// {
//     cin.tie(0)->sync_with_stdio(0);
//     int t;cin>>t;
//     while(t--)
//     {
//         solve();
//     }
// }

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t,n,k,x;
	scanf("%d",&t);
	while(t--){
		x=1;
		scanf("%d%d",&n,&k);
		string s(n,'a');
		while(k>x)k-=x++;
		s[n-x-1]=s[n-k]='b';
		cout<<s<<"\n";
	}
}