#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int cnt2 = 0;
    int odd = 0;
    if (n == 1)
    {
        cout << "FastestFinger" << endl;
        return;
    }
    else if (n == 2)
    {
        cout << "Ashishgup" << endl;
        return;
    }
    else if (n & 1)
    {
        cout << "Ashishgup" << endl;
        return;
    }
    while (n % 2 == 0)
    {
        cnt2++;
        n /= 2;
    }
    for (int i = 3; i * i <= n;)
    {
        if (n % i == 0)
        {
            odd++;
            n /= i;
        }
        else
            i += 2;
    }
    if (n > 2)
        odd++;
    // cout << cnt2 << odd << endl;
    if (cnt2 == 1)
    {
        if (odd == 1)
        {
            cout << "FastestFinger" << endl;
            return;
        }
        else
        {
            cout << "Ashishgup" << endl;
            return;
        }
    }
    else
    {
        if (odd ==0)
        {
            cout << "FastestFinger" << endl;
            return;
        }
        else
        {
            cout << "Ashishgup" << endl;
            return;
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