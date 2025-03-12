#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    set<ll> s;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    ll temp = n - 2;
    for (int i = 1; i * i <= temp; i++)
    {
        if (temp % i == 0)
        {
            if (s.find(i) != s.end() && s.find(temp / i) != s.end())
            {
                cout << i << " " << temp / i << endl;
                return;
            }
        }
    }
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