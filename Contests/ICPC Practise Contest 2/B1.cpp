#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;
    if (k >= n)
    {
        cout << n * (n - 1) / 2 << "\n";
        return;
    }
    map<int, int> mp;
    for (int &x : a)
        mp[x]++;
    priority_queue<int, vector<int>> pq;
    for (auto &x : mp)
        pq.push(x.second);
    ll ans = 0;
    while (k--)
    {
        int x = pq.top();
        pq.pop();
        ans += x - 1;
        pq.push(x - 1);
    }
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]--;
        ans += n - i - 1 - mp[a[i]];
    }
    cout << ans << "\n";
}

int main()
{

    int tt;
    cin >> tt;
    while (tt--)
        solve();
}