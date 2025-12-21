#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }
    if(mp.size()==1)
    {
        cout<<"YES\n";
        return;
    }
    if (mp.size() == 2)
    {
        if (n & 1 && ((mp.begin()->second == n / 2) || (mp.begin()->second == n / 2 + 1)))
            cout << "YES\n";
        else if (n % 2 == 0 && mp.begin()->second == n / 2)
            cout << "YES\n";
        else
            cout << "NO\n";
        return;
    }
    cout << "NO\n";
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