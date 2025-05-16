#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, x;
    cin >> n >> x;
    if (n == 1)
    {
        if (x == 0)
            cout << -1 << endl;
        else
            cout << x << endl;
        return;
    }
    if (x == 1)
    {
        if (n % 2 == 0)
            cout << n + 3 << endl;
        else
            cout << n << endl;
        return;
    }
    if (x == 0)
    {
        if (n % 2 == 0)
            cout << n << endl;
        else
            cout << n + 3 << endl;
        return;
    }
    ll sum = 0;
    ll numofelem = 0;
    for (int i = 31; i >= 0; i--)
    {
        if ((x >> i) & 1)
        {
            sum += 1 << i;
            numofelem++;
        }
    }
    ll num = n - numofelem;
    if(num>0)
    {
        if(num&1)
        sum+=num+1;
        else
        sum+=num;
    }
    cout<<sum<<endl;
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