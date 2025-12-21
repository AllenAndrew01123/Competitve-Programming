#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    ll arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    vector<ll> v;
    map<ll, ll> mp;
    ll mx = 1;
    for (int i = 1; i <= n; i++)
    {
        if (mp.find(arr[i] - 1) != mp.end())
            mp[arr[i]] = mp[arr[i] - 1] + 1;
        else
            mp[arr[i]] = 1;
        mx = max(mx, mp[arr[i]]);
    }
    ll element;
    for (auto x : mp)
    {
        if (x.second == mx)
        {
            element = x.first;
        }
    }
    for (int i = n; i >= 1; i--)
    {
        if (arr[i] == element)
        {
            v.push_back(i);
            element--;
        }
    }
    reverse(v.begin(),v.end());
    cout<<v.size()<<endl;
    for (auto x : v)
        cout << x << " ";
}