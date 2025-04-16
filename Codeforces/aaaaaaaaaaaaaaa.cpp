#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll a11, a12, a13, a21, a22, a23, a31, a32, a33;
        cin >> a11 >> a12 >> a13 >> a21 >> a22 >> a23 >> a31 >> a32 >> a33;
        cout << a11 * (a22 * a33 - a23 * a32) - a12 * (a21 * a33 - a23 * a31) + a13 * (a21 * a32 - a22 * a31)<<endl;
    }
}
