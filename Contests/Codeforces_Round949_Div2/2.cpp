#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 32; i >= 0; i--)
    {
        if ((n >> i) & 1 == 1)
            v.push_back(1);
        else
        {
            if (!v.empty())
                v.push_back(0);
        }
    }
    ll idx = 1, ns = 0, ans = 0;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == 1)
        {
            ans += idx;
            ns += idx;
        }
        else
        {
            ll mn = min(idx - ns, ns + 1);
            if (mn <= m)
            {
                ans += idx;
            }
        }
        idx*=2;
    }
    while (idx - ns <= m)
    {
        ans += idx;
        idx *= 2;
    }
    cout << ans << endl;
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