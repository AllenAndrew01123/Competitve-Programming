#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m, L;
    cin >> n >> m >> L;
    ll l[n + 1], r[n + 1], x[m + 1], v[m + 1];
    for (int i = 1; i <= n; i += 1)
    {
        cin >> l[i] >> r[i];
    }
    for (int i = 1; i <= m; i += 1)
    {
        cin >> x[i] >> v[i];
    }
    priority_queue<int> pq;
    int an = 0, j = 1, jump = 1;
    for (int i = 1; i <= n; i += 1)
    {
        while (j <= m && x[j] < l[i])
        {
            pq.push(v[j]);
            j += 1;
        }
        while (!pq.empty() && jump < r[i] - l[i] + 2)
        {
            jump += pq.top();
            pq.pop();
            an += 1;
        }
        if (pq.empty() && jump < r[i] - l[i] + 2)
        {
            an = -1;
            break;
        }
    }
    cout << an <<endl;
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