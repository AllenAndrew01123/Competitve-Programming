#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void update(vector<ll> &arr, vector<ll> &ans, ll left, ll right)
{
    ll mn = min(arr[left], arr[right]);
    ll mx = max(arr[left], arr[right]);
    for (int i = left + 1; i < right; i++)
    {
        if (mn < arr[i] && arr[i] < mx)
            ans[i] = 1;
    }
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]] = i;
    }
    string x;
    cin >> x;
    if (x[0] == '1' || x[n - 1] == '1' || x[mp[1]] == '1' || x[mp[n]] == '1')
    {
        cout << -1 << endl;
        return;
    }
    vector<ll> ans(n, 0);
    vector<pair<ll, ll>> ops;
    for (int r = 1; r < n; r++)
    {
        ll mn = min(arr[0], arr[r]);
        ll mx = max(arr[0], arr[r]);
        bool flag = false;
        for (int i = 1; i < r; i++)
        {
            if (arr[i] > mn && arr[i] < mx)
            {
                if (x[i] == '1' && ans[i] == 0)
                {
                    flag = true;
                }
                ans[i] = 1;
            }
        }

        if (flag && ops.size() < 5)
            ops.push_back({0, r});
    }
    for (int l = 0; l < n - 1; l++)
    {
        ll mn = min(arr[l], arr[n - 1]);
        ll mx = max(arr[l], arr[n - 1]);
        bool flag = false;
        for (int i = l + 1; i < n - 1; i++)
        {
            if (arr[i] > mn && arr[i] < mx)
            {
                if (x[i] == '1' && ans[i] == 0)
                {
                    flag = true;
                }
                ans[i] = 1;
            }
        }

        if (flag && ops.size() < 5)
            ops.push_back({l, n - 1});
    }
    for (int i = 0; i < n; i++)
    {
        if (x[i] == '1' && ans[i] == 0)
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << ops.size() << endl;
    for (auto x : ops)
        cout << x.first + 1 << " " << x.second + 1 << endl;
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