#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<ll> a(n);
    map<ll, vector<ll>> mp;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        mp[a[i] % k].push_back(a[i]);
    }
    int cnt = 0;
    for (auto x : mp)
    {
        if (x.second.size() & 1)
            cnt++;
    }
    if (cnt > 1 || (cnt == 1 && n % 2 == 0))
    {
        cout << -1 << endl;
        return;
    }
    ll sum = 0;
    for (auto x : mp)
    {
        if (x.second.size() % 2 == 0)
        {
            for (int i = 0; i < x.second.size(); i += 2)
            {
                sum += (x.second[i + 1] - x.second[i]) / k;
            }
        }
        else
        {
            ll sum2 = 0;
            for (int i = 0; i < x.second.size() - 1; i += 2)
            {
                sum2 += (x.second[i + 1] - x.second[i]) / k;
            }
            ll sum3 = sum2;;
            for (int i = x.second.size()-1; i > 0; i -= 2)
            {
                sum2 += (x.second[i] - x.second[i-1]) / k;
                sum2-=(x.second[i-1]-x.second[i-2])/k;
                sum3=min(sum3,sum2);

            }
            sum += sum3;
        }
    }
    cout << sum << endl;
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