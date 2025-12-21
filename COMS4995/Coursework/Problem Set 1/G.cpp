#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll x, k, y;
    cin >> x >> k >> y;
    vector<ll> v1(n), v2(m);
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
        mp[v1[i]] = i;
    }
    for (int i = 0; i < m; i++)
        cin >> v2[i];
    for(int i=0;i<m;i++)
    {
        if(mp.find(v2[i])==mp.end())
        {
            cout<<-1<<endl;
            return;
        }
    }
    ll ans = 0;
    // Elements before first element of b
    ll right1 = v2[0];
    ll numOfElem1 = mp[right1];
    if (numOfElem1 > 0)
    {
        ll mxinseg1 = *max_element(v1.begin(), v1.begin() + mp[right1]);
        if (numOfElem1 < k && mxinseg1 > right1)
        {
            cout << -1 << endl;
            return;
        }
        else if (numOfElem1 < k)
            ans += y * numOfElem1;
        else if (numOfElem1 >= k && mxinseg1 > right1)
        {
            ans += x;
            numOfElem1 -= k;
            ll excess = numOfElem1 % k;
            ans += y * excess;
            ll rem = (numOfElem1 - excess) / k;
            ans += min(rem * x, rem * k * y);
        }
        else
        {
            ll excess = numOfElem1 % k;
            ans += y * excess;
            ll rem = (numOfElem1 - excess) / k;
            ans += min(rem * x, rem * k * y);
        }
    }
    // Elements in b/w intervals
    for (int i = 0; i < m - 1; i++)
    {
        if (mp[v2[i]] > mp[v2[i + 1]])
        {
            cout << -1 << endl;
            return;
        }
        ll left = v2[i];
        ll right = v2[i + 1];
        ll numOfElem = mp[right] - mp[left] - 1;
        if (numOfElem == 0)
            continue;
        ll mxinseg = *max_element(v1.begin() + mp[left] + 1, v1.begin() + mp[right]);
        if (numOfElem < k && mxinseg > max(left, right))
        {
            cout << -1 << endl;
            return;
        }
        else if (numOfElem < k)
            ans += y * numOfElem;
        else if (numOfElem >= k && mxinseg > left && mxinseg > right)
        {
            ans += x;
            numOfElem -= k;
            ll excess = numOfElem % k;
            ans += y * excess;
            ll rem = (numOfElem - excess) / k;
            ans += min(rem * x, rem * k * y);
        }
        else
        {
            ll excess = numOfElem % k;
            ans += y * excess;
            ll rem = (numOfElem - excess) / k;
            ans += min(rem * x, rem * k * y);
        }
    }
    // Elements after last element of b
    ll left = v2[m - 1];
    ll numOfElem = n - mp[left] - 1;
    if (numOfElem > 0)
    {
        ll mxinseg = *max_element(v1.begin() + mp[left] + 1, v1.end());
        if (numOfElem < k && mxinseg > left)
        {
            cout << -1 << endl;
            return;
        }
        else if (numOfElem < k)
            ans += y * numOfElem;
        else if (numOfElem >= k && mxinseg > left)
        {
            ans += x;
            numOfElem -= k;
            ll excess = numOfElem % k;
            ans += y * excess;
            ll rem = (numOfElem - excess) / k;
            ans += min(rem * x, rem * k * y);
        }
        else
        {
            ll excess = numOfElem % k;
            ans += y * excess;
            ll rem = (numOfElem - excess) / k;
            ans += min(rem * x, rem * k * y);
        }
    }
    cout << ans << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}
