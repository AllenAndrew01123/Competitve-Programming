#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;cin>>n;
    set<ll>s;
    while(n--)
    {
        ll x;cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<endl;
}