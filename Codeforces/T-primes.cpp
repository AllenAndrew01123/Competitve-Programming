#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isprime(double root)
{
    ll y=root;
    int i=2;
    while(i*i<=y)
    {
        if(y%i==0)
        return false;
        i++;
    }
    return true;
}
void solve(ll x)
{
    double root=sqrt(x);
    if(floor(root)!=ceil(root))
    {
        cout<<"NO\n";
        return;
    }
    else
    {
        if(isprime(root))
        {
            cout<<"YES\n";
            return;
        }
        cout<<"NO\n";
        return;
    }
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        ll x;cin>>x;
        if(x==1)
        {
            cout<<"NO\n";
            continue;
        }
        solve(x);
    }
}