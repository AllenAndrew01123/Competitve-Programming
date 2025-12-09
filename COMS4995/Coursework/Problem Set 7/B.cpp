#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll cnt = 1;
    vector<ll> ans;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            ans.push_back(cnt);
            cnt = 1;
        }
        else
            cnt++;
    }
    ans.push_back(cnt);
    ll mx = LLONG_MIN;
    for (int i = 0; i < ans.size() - 1; i++)
    {
        mx = max(mx, min(ans[i], ans[i + 1]));
    }
    cout << 2*mx << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}