#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n + 1];
    ll cnt1 = 0, cnt2 = 0;
    pair<ll, ll> mn, mx;
    mn = {21, -1};
    mx = {-21, -1};
    vector<pair<ll, ll>> ans;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if(arr[i]>0)
        cnt1++;
        else if(arr[i]<0)
        cnt2++;
        if (arr[i] > mx.first)
            mx = {arr[i], i};
        if (arr[i] < mn.first)
            mn = {arr[i], i};
    }
    if (min(cnt1, cnt2) <= 7)
    {
        if (cnt1 <= cnt2)
        {
            for (int i = 1; i <= 5; i++)
                ans.push_back({mn.second, mn.second});
            for (int i = 1; i <= n; i++)
            {
                if (arr[i] > 0)
                    ans.push_back({i, mn.second});
            }
            for (int i = n - 1; i >= 1; i--)
                ans.push_back({i, i + 1});
        }
        else
        {
            for (int i = 1; i <= 5; i++)
                ans.push_back({mx.second, mx.second});
            for (int i = 1; i <= n; i++)
            {
                if (arr[i] < 0)
                    ans.push_back({i, mx.second});
            }
            for (int i = 2; i <= n; i++)
                ans.push_back({i, i - 1});
        }
    }
    else
    {
        bool flag = (abs(mn.first) > abs(mx.first)) ? false : true;
        if (flag)
        {
            for (int i = 1; i <= n; i++)
            {
                if (arr[i] < 0)
                    ans.push_back({i, mx.second});
            }
            for (int i = 2; i <= n; i++)
                ans.push_back({i, i - 1});
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                if (arr[i] > 0)
                    ans.push_back({i, mn.second});
            }
            for (int i = n - 1; i >= 1; i--)
                ans.push_back({i, i + 1});
        }
    }
    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x.first << " " << x.second << endl;
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
