#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> v(n + 1, 1);
    for (int i = y - 1; i >= 1; i -= 2)
        v[i] = -1;
    for (int i = x + 1; i <= n; i += 2)
        v[i] = -1;
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
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