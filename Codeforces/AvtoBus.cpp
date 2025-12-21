#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    if(n<4 || n&1)
    {
        cout<<-1<<endl;
        return;
    }
    ll min=n/6;
    if(n%6!=0)
    min++;
    ll max=n/4;
    cout<<min<<" "<<max<<endl;
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