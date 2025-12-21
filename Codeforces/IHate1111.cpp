#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
void solve()
{
    long long x;
    cin >> x;
    if (x > 1099) // chicken mcnugget thm
    {
        cout << "YES\n";
        return;
    }
    for (int i = 0; x-i*111>=0; i++)
    {
        if ((x - i * 111) % 11 == 0)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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