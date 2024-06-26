#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll cnt = 0;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j * j <=i; j++)
        {
            if (i % j == 0)
            {
                if ((j*j)%(i+j)==0)
                {
                    cnt++;
                    cout << i << " " << j << endl;
                }
                ll j2=i/j;
                if ((j2*j2)%(i+j2)==0 && j2!=j)
                {
                    cnt++;
                    cout << i << " " << j2 << endl;
                }

            }
            
        }
    }
    cout << cnt << endl;
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