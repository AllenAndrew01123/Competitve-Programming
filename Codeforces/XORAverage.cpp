#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    if (n & 1)
    {
        for (int i = 1; i <= n; i++)
            cout << 1 << " ";
        cout << endl;
        return;
    }
    else
    {
        cout << 1 << " " << 3 << " ";
        n -= 2;
        while (n--)
            cout << 2 << " ";
        cout << endl;
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