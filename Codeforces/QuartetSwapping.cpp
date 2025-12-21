#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define mod 100000000
typedef long long ll;
ll parity(vector<ll> &v)
{
    map<ll, ll> mp;
    ordered_set o_set; 
    for (int i = 0; i < v.size(); i++)
        mp[v[i]] = i;
    ll ans = 0;
    for (auto x : mp)
    {
        ans += x.second - (o_set.order_of_key(x.second));
        o_set.insert(x.second);
    }
    return ans;
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n + 1), odd, even;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (i & 1)
            odd.push_back(arr[i]);
        else
            even.push_back(arr[i]);
    }
    ll po = parity(odd);
    ll pe = parity(even);
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    if ((po + pe) & 1)
    {
        if(n&1)
        swap(odd[odd.size()-1],odd[odd.size()-2]);
        else
        swap(even[even.size()-1],even[even.size()-2]);
    }
    ll idx = 0;
    for (; idx < n / 2; idx++)
        cout << odd[idx] << " " << even[idx] << " ";
    if (n & 1)
        cout << odd[idx];
    cout << endl;
    return;
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