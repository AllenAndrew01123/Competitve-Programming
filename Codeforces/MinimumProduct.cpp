#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long a,b,x,y,n;cin>>a>>b>>x>>y>>n;
    long long diffa=a-x;
    long long diffb=b-y;
    if(diffa+diffb<=n)
    {
        cout<<x*y<<endl;
        return;
    }
    else
    {
        long long d=(n>=diffa)?(x*(b-(n-diffa))):((a-n)*b);
        long long e=(n>=diffb)?(y*(a-(n-diffb))):((b-n)*a);
        cout<<min(d,e)<<endl;
        return;
        

    }
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