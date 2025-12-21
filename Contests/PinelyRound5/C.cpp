#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, X;
    cin >> n >> X;
    vector<ll> a(n), asc(n);
    map<ll, ll> mp;
    priority_queue<ll> pq;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        asc[i] = a[i];
        pq.push(a[i]);
        mp[a[i]]++;
    }
    sort(asc.begin(), asc.end());
    ll r = 0, bonus = 0;
    vector<ll> ans;
    int idx = 0;
    while (ans.size() < n)
    {
        while (idx < n && mp[asc[idx]] == 0)
            idx++;
        bool need_jump = (idx == n) || (r + asc[idx] >= X);
        if (!need_jump)
        {
            ans.push_back(asc[idx]);
            r += asc[idx];
            mp[asc[idx]]--;
            idx++;
        }
        else
        {
            while (!pq.empty() && mp[pq.top()] == 0)
                pq.pop();
            ans.push_back(pq.top());
            if (r + pq.top() >= X)
                bonus += pq.top();
            r = (r + pq.top()) % X;
            mp[pq.top()]--;
            pq.pop();
        }
    }
    cout << bonus << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
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
