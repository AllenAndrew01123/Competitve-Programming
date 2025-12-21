#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (a[i] % a[0] != 0)
            b.push_back(a[i]);
    }
    if (b.empty())
    {
        cout << "Yes\n";
        return;
    }
    sort(b.begin(), b.end());
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] % b[0] != 0)
        {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
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