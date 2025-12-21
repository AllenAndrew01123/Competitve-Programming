#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 0; j < n; j++)
            sum += a[j];
        map<ll, ll> mp;
        ll var = 0;
        for (int j = 0; j < n; j++)
        {
            mp[a[j]]++;
            if (mp[a[j]]==2)
            {
                var=max(var,a[j]);
            }
            a[j]=var;
        }
        mp.clear();
    }
    for(int i=0;i<n;i++)
        sum+=(n-i)*a[i];
    cout<<sum<<endl;
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