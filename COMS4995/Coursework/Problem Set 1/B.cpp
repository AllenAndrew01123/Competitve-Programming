#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
bool fairnumber(ll n)
{
    ll temp=n;
    while(n>0)
    {
        ll d=n%10;
        if(d)
        {
            if(temp%d)
            return false;
        }
        n/=10;
    }
    return true;
}
void solve()
{
   ll n;cin>>n;
   for(ll i=n;;i++)
   {
    if(fairnumber(i))
    {
        cout<<i<<endl;
        return;
    }
   }
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