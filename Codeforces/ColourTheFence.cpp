#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    map<ll, ll> mp, mp2;
    string c;
    ll mn = LLONG_MAX;
    for (int i = 1; i <= 9; i++)
    {
        cin >> mp[i];
        if (mp[i] <= mn)
        {
            mn = mp[i];
            c = to_string(i);
        }
    }
    for (int i = 1; i <= 9; i++)
    {
        mp2[i] = mp[i] - mn;
    }
    ll l = 0, r = 1e6;
    string ans = "";
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (mn * mid > n)
        {
            r = mid - 1;
        }
        else
        {
            ll ex = n - mn * mid;
            ans.clear();
            for (int i = 9; i >= 1 && mp2[i] != 0; i--)
            {
                ll num = ex / mp2[i];
                // cout<<i<<" "<<num<<endl;
                for (int j = 1; j <= num; j++)
                    ans += to_string(i);
                ex -= num * mp2[i];
            }
            ll temp=ans.size();
            for (int i = 1; i <= mid - temp; i++)
                ans += c;
            // cout<<ans<<endl;
            l = mid + 1;
        }
    }
    if (ans.empty())
        cout << -1 << endl;
    else
        cout << ans << endl;
}