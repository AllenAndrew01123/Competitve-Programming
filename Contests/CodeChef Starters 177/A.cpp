#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll a,b,c;cin>>a>>b>>c;
    if((a+b>c)&&(b+c>a)&&(c+a>b))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    while(t--)
    {
        solve();
    }
}