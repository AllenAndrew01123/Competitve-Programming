#include<bits/stdc++.h>
using namespace std;
void solve(long long n)
{
    if(n==1)
    {
        cout<<"NO\n";
        return;
    }
    long long limit=cbrt(n*1.0);
    // cout<<limit<<endl;
    long long i;
    double j;
    for(i=1;i<=limit;i++)
    {
        j=cbrt(n-i*i*i);
        // cout<<j<<endl;
        if(ceil(j)==floor(j)&&j!=0)
        {
            cout<<"YES\n";
            return;
        }

    }
    cout<<"NO\n";
    return;

}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        long long  n;cin>>n;
        solve(n);
    }
}