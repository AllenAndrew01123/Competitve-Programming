#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;cin>>n;
    multiset<ll>s;
    for(int i=1;i<=n;i++)
    {
        ll x;cin>>x;
        if(s.upper_bound(x)==s.end())
        s.insert(x);
        else
        {
            s.erase(s.upper_bound(x));
            s.insert(x);
        }
    }
    cout<<s.size()<<endl;
}