#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ll mn = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] += i;
    }
    ll b[n] = {0};
    for (int i = 0; i < n; i++)
    {
        b[(a[i]%n+n) % n]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 1 )
            continue;
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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