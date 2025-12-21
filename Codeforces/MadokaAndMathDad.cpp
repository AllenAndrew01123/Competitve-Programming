#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    if (n % 3 == 0)
    {
        for (int i = 1; i <= n / 3; i++)
            cout << "21";
        cout << endl;
        return;
    }
    if (n % 3 == 1)
    {
        cout << "1";
        n--;
        for (int i = 1; i <= n / 3; i++)
            cout << "21";
        cout << endl;
        return;
    }
    if (n % 3 == 2)
    {
        cout << "2";
        n--;
        for (int i = 1; i <= n / 3; i++)
            cout << "12";
        cout << endl;
        return;
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
