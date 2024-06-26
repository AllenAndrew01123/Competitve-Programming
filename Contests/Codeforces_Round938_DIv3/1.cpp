#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        int n,a,b;cin>>n>>a>>b;
        cout<<min(n/2*b+n%2*a,n*a)<<endl;
    }
    
}