#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll x, y, z, k;
    cin >> x >> y >> z >> k;
    ll count = 0;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {
            double potz=k*1.0/(i*j);
            if (floor(potz)==ceil(potz) && (potz <= z))
            {
                ll xx = i - 1;
                ll yy = j - 1;
                ll zz = potz - 1;
                count = max(count, (x - xx) * (y - yy) * (z - zz));
            }
        }
    }
    cout << count << endl;
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