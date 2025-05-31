#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll a, b;
    cin >> a >> b;
    ll g=__gcd(a,b);
    set<ll>s;
    for(ll i=1;i*i<=g;i++)
    {
        if(g%i==0)
        {
            s.insert(i);
            if(g%(g/i)==0)
            s.insert(g/i);
        }
    }
    ll prod=1;
    ll cnt=0;
    for(auto x:s)
    {
        if(__gcd(prod,x)==1)
        {
            cnt++;
            prod*=x;
        }
    }
    cout<<cnt<<endl;
}