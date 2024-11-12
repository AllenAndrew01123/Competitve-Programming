#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < k; i++)
    {
        ll x, y;
        cin >> x >> y;
    }
    for (int i = 0; i < k; i++)
    {
        ll x, y;
        cin >> x >> y;
    }
    if(n==1 && m==1)
    {
        cout<<0<<endl;
        return;
    }
    cout<<n+m+n*m-2<<endl;
    for (int i = 1; i <= n-1; i++)
        cout << "U";
    for (int i = 1; i <= m-1; i++)
        cout << "R";
    ll ite = n / 2;
    while (ite--)
    {
        for (int i = 1; i <= m-1; i++)
            cout << "L";
        cout << "D";
        for (int i = 1; i <= m-1; i++)
            cout << "R";
        cout << "D";
    }
    if(n&1)
    {
        for (int i = 1; i <= m-1; i++)
            cout << "L";
        cout << "D";
    }
    cout<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}