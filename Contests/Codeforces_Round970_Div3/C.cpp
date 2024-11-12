#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll l,r;cin>>l>>r;
    ll cnt=0,lvl=1;
    while(l<=r)
    {
        cnt++;
        l+=lvl;
        lvl++;
    }
    cout<<cnt<<endl;
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