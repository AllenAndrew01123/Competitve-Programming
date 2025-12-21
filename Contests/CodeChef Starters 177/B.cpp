#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll x,y,k;cin>>x>>y>>k;
    if((abs(x-y)-k)%2==0)
    cout<<abs((abs(x-y)-k))/2<<endl;
    else
    cout<<-1<<endl;

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