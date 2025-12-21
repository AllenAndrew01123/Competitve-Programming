#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll a,b;cin>>a>>b;
    ll ans=0;
    while(a%b!=0)
    {
        ans+=a/b;
        a=a%b;
        swap(a,b);
    }
    cout<<ans+a/b<<endl;
}