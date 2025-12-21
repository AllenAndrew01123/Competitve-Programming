#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    long long n,m;
    cin>>n>>m;
    long long a=n-m+1;
    long long b=n/m;
    cout<<(n%m)*(b+1)*b/2+(m-n%m)*b*(b-1)/2<<" "<<a*(a-1)/2;
}