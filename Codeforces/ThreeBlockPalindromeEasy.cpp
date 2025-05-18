#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    map<ll, vector<ll>> mp;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        mp[x].push_back(i);
    }
    ll ans = 0;
    for (auto x1 : mp)
    {
        for (auto x2 : mp)
        {
            if (x1.first == x2.first)
                ans = max(ans, (ll)x1.second.size());
            else
            {
                ll left = 0;
                ll right = x1.second.size() - 1;
                while (left < right)
                {
                    ll cnt = 0;
                    for (auto y : x2.second)
                    {
                        if (y > x1.second[left] && y < x1.second[right])
                            cnt++;
                    }
                    ans=max(ans,cnt+2*(left+1));
                    left++;
                    right--;
                }
            }
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