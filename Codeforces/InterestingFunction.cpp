#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, ans;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        ans = 0;
        while (a || b)
        {
            ans += b - a;
            b /= 10;
            a /= 10;
        }
        cout << ans << endl;
    }
}