#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x;
    cin >> n;
    set<int> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        s.insert(x);
    }
    int op = 0, l = 0;
    for (int x : s)
    {
        op++;
        if (x - l > 1)
            break;
        l = x;
    }
    cout << (op&1 ? "Alice\n" : "Bob\n");
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}