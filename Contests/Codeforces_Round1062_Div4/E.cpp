#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

void solve()
{
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    auto dist_to_nearest = [&](ll pos)
    {
        ll idx = lower_bound(v.begin(), v.end(), pos) - v.begin();
        ll d1 = (idx > 0 ? abs(v[idx - 1] - pos) : LLONG_MAX);
        ll d2 = (idx < n ? abs(v[idx] - pos) : LLONG_MAX);
        return min(d1, d2);
    };
    priority_queue<pair<ll, ll>> pq;
    ll str = 0;
    ll temp = k;
    while (temp-- && str <= v[0])
    {
        pq.push({dist_to_nearest(str), str});
        str++;
    }
    temp = k;
    ll end = x;
    while (temp-- && end >= v[n - 1])
    {
        pq.push({dist_to_nearest(end), end});
        end--;
    }
    for (int i = 1; i < n; i++)
    {
        ll mid = (v[i] + v[i - 1]) / 2;
        pq.push({dist_to_nearest(mid), mid});
    }
    set<ll> used;
    while (k-- && !pq.empty())
    {
        while (!pq.empty() && (used.count(pq.top().second) || pq.top().second < 0 || pq.top().second > x))
            pq.pop();
        if (pq.empty())
            break;
        pair<ll, ll> p = pq.top();
        pq.pop();
        cout << p.second << " ";
        used.insert(p.second);
        ll left = p.second - 1;
        ll right = p.second + 1;
        if (left >= 0 && !used.count(left))
            pq.push({dist_to_nearest(left), left});
        if (right <= x && !used.count(right))
            pq.push({dist_to_nearest(right), right});
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
