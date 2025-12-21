#include<bits/stdc++.h>
using namespace std;
long long sum(long long n){
	long long jam=0;
	while(n>0){
		jam+=n%10;
		n/=10;
	}
	return jam;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,s;
		cin>>n>>s;
		long long a=10,b=n;
		while(sum(n)>s){
			n+=a-n%a;
			a*=10;
		}
		cout<<n-b<<endl;
	}	
}