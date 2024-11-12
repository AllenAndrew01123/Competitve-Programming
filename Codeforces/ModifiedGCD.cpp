#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll a, b;
    cin >> a >> b;
    set<ll> divs1,divs2;
    for (int i = 1; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            divs1.insert(i);
            divs1.insert(a / i);
        }
    }
    for (auto x : divs1)
    {
        if ((b % x) == 0)
            divs2.insert(x);
    }
    ll n;
    cin >> n;
    while (n--)
    {
        ll l, r;
        cin >> l >> r;
        ll val = *(--upper_bound(divs2.begin(), divs2.end(), r));
        if (l <= val)
            cout << val << endl;
        else
            cout << -1 << endl;
    }
}