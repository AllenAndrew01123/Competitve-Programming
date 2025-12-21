#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        if(k&1)
        {
            ll t=k-1;
            cout<<(n+t-1)/t<<endl;
        }
        else
        {
            cout<<(n+k-1)/k<<endl;
        }
    }
    else
    {
        if(k&1)
        {
            n-=k;
            ll t=k-1;
            cout<<1+(n+t-1)/t<<endl;
        }
        else
        {
            n-=k-1;
            cout<<1+(n+k-1)/k<<endl;
        }
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}