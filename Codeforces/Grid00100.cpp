#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll temp,temp2=k;
    vector<vector<ll>> v(n, vector<ll>(n, 0));
    ll c = 0;
    for (int i = 0;; c++)
    {
        temp = n;
        for (int j = c; temp > 0; j = (j + 1) % n)
        {
            if (k > 0)
            {
                v[i][j] = 1;
                temp--;
                k--;
                i = (i + 1) % n;
            }
            else
            {
                break;
            }
        }
        if (k == 0)
            break;
    }
    if (temp2 % n == 0)
        cout << 0 << endl;
    else
        cout << 2 << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << v[i][j] ;
        cout << endl;
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