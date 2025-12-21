#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            continue;
        else
        {
            if (k > 0)
            {
                if (k >= v[i - 1] - v[i])
                {
                    k -= v[i - 1] - v[i];
                    v[i] = v[i - 1];
                }
                else
                {
                    v[i] += k;
                    k = 0;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            sum1 += v[i];
        else
            sum2 += v[i];
    }
    // cout << sum1 << " " << sum2 << endl;
    cout << sum1 - sum2 << endl;
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