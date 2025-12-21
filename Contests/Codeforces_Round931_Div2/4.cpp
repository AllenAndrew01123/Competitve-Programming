#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    ll n, m, bits;
    vector<ll> v;
    cin >> n >> m;
    while (n & (n - 1) != 0)
    {
        bits = (ll)log2(n) + 1;
        v.push_back(n);
        n -=(ll)pow(2,bits-1);
        if (m > n)
        {
            n = (ll)pow(2, bits);
            v.push_back(n);
            break;
        }
        else if (m == n)
        {
            v.push_back(n);
            break;
        }
    }
    if (m == n)
    {
        for (auto x : v)
        {
            cout << x << " ";
        }
    }
    else
    {
        cout << -1;
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
