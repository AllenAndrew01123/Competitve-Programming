#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    ll r, g, b, w;
    cin >> r >> g >> b >> w;
    ll cnt = 1e6;
    bool flag1 = r % 2 == 0;
    bool flag2 = g % 2 == 0;
    bool flag3 = b % 2 == 0;
    bool flag4 = w % 2 == 0;
    if (flag1 + flag2 + flag3 + flag4 >= 3)
    {
        cout << "Yes\n";
        return;
    }
    while ((cnt--) && r && g && b)
    {
        r--;
        g--;
        b--;
        w += 3;
        flag1 = r % 2 == 0;
        flag2 = g % 2 == 0;
        flag3 = b % 2 == 0;
        flag4 = w % 2 == 0;
        if (flag1 + flag2 + flag3 + flag4 >= 3)
        {
            cout << "Yes\n";
            return;
        }
    }
    cout<<"No\n";
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
    return 0;
}
