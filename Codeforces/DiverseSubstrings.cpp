#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    for (int st=0;st<n;st++)
    {
        map<char,ll>mp;
        ll mx=0;
        for(int idx=st;idx<n && idx<st+100;idx++)
        {
            mp[s[idx]]++;
            mx=max(mx,mp[s[idx]]);
            if(mp.size()>=mx)
            ans++;
        }
    }
    cout << ans << endl;
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