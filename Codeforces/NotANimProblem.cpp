#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        cnt++;
        else if(a[i]==2)
        cnt+=2;
        else if(a[i]&1)
        
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