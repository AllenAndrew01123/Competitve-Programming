#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(ceil(log2(n))==floor(log2(n)))
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }

}
// logical and