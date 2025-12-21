#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        int s=min(max(n,2*m),max(2*n,m));
        cout<<s*s<<endl;
    }
}