#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c,d;cin>>a>>b>>c>>d;
    if(a%2==1 && b%2==1 && c%2==1)
    cout<<1+a/2+b/2+c/2+d/2<<endl;
    else
    cout<<a/2+b/2+c/2+d/2<<endl;
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}