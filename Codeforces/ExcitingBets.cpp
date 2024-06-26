#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        long long a,b;cin>>a>>b;
        long long diff=abs(a-b);
        long long moves;
        if(a==b)
        moves=0;
        else
        moves=min(a%diff,diff-a%diff);
        cout<<diff<<" "<<moves<<endl;
    }
}
