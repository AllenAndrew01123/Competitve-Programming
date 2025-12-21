#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    if (((n & (n - 1)) == 0) || (((n + 1) & n) == 0))
    {
        cout << -1 << endl;
        return;
    }
    if(n%2==0)
    {
        cout<<n-1<<endl;
        return;
    }
    for (int i = 1; i < 31; i++)
    {
        if (((n >> i) & 1) == 0)
        {
            cout << (1 << i) + 1 << endl;
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