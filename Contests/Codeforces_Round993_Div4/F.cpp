#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<ll> a, b;
bool check(ll x, ll y)
{
    if (binary_search(a.begin(), a.end(), x) && (binary_search(b.begin(), b.end(), y)))
        return true;
    return false;
}
void solve()
{
    ll n, m, q;
    cin >> n >> m >> q;
    ll arr1[n], arr2[m];
    ll suma = 0, sumb = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        suma += arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
        sumb += arr2[i];
    }
    for (int i = 0; i < n; i++)
        a.push_back(suma - arr1[i]);
    for (int i = 0; i < m; i++)
        b.push_back(sumb - arr2[i]);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    while (q--)
    {
        bool flag = false;
        ll x;
        cin >> x;
        if (x == 0 && (find(a.begin(), a.end(), 0) != a.end() || find(b.begin(), b.end(), 0) != b.end()))
            flag = true;
        for (ll j = 1; j * j <= abs(x); j++)
        {
            if (abs(x) % j == 0)
            {
                if (check(j, x / j) || check(x / j, j) || check(-j, x / -j) || check(x / -j, -j))
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}