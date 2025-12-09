#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    bool flag = true;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i]<2*max(i+1,n-i)-1)
        flag=false;
    }
    if(flag)
    cout<<"YES\n";
    else
    cout<<"NO\n";
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