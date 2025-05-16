#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    ll arr1[n+1], arr2[n+1];
    ll lstidx = n;
    ll idx1 = 1, idx2 = n;
    vector<ll> ans;
    for (int i = 0; i < n; i++)
        arr1[i+1] = a[i] - 48;
    for (int i = 0; i < n; i++)
        arr2[i+1] = b[i] - 48;
    for (int i = 1; i <= n; i++)
    {
        if (i&1)
        {
            if (arr1[idx1] == arr2[lstidx])
                ans.push_back(1);
            ans.push_back(lstidx);
            idx1++;
        }
        else
        {
            if ((1 - arr1[idx2]) == arr2[lstidx])
                ans.push_back(1);
            ans.push_back(lstidx);
            idx2--;
        }
        lstidx--;
    }
    cout << ans.size() << " ";
    for (auto x : ans)
        cout << x << " ";
    cout << endl;
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