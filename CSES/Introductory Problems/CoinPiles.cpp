#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll a,b;cin>>a>>b;
    bool flag1=0,flag2=0;
    if((2*b-a)>=0 && (2*b-a)%3==0)
    flag1=true;
    if((2*a-b)>=0 && (2*a-b)%3==0)
    flag2=true;
    if(flag1&flag2)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}