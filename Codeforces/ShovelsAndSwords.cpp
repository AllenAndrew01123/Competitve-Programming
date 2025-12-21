#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        long long a,b;cin>>a>>b;
        cout<<min((a+b)/3,min(a,b))<<endl;
    }
}