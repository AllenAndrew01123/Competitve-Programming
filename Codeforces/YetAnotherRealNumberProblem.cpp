#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n + 1];
    ll cnt[n + 1]={0};
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        ll c=0;
        if(arr[i]%2==0)
        {
            c++;
            arr[i]/=2;
        }
        cnt[i]=cnt[i-1]+c;
        
    }
    ll max
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