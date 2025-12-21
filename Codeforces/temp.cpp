#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll num = n + 1;
    ll sum = 0;
    ll c = 1;
    while (n >= k)
    {
        if (n & 1)
            sum += c;
        n /= 2;
        c *= 2;
    }
    cout << num * sum / 2 << endl;
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