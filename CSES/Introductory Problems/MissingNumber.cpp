#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;cin>>n;
    set<ll>s;
    for(int i=1;i<=n;i++)
    s.insert(i);
    for(int i=1;i<=n-1;i++)
    {
        ll x;
        cin>>x;
        s.erase(x);
    }
    cout<<*s.begin()<<endl;
}