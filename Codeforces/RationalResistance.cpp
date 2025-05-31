#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll a, b;
    cin >> a >> b;
    ll ans = 0;
    if (b > a)
        swap(a, b);
    while (true)
    {
        if (b==0)
        {
            cout << ans << endl;
            return 0;
        }
        ans+=a/b;
        a=a%b;
        swap(a,b);
    }
}