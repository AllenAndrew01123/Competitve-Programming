#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll solve(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
    {
        ll a = n;
        ll b = n - 1;
        ll c;
        for (c = n - 2; c >= 1; c--)
        {
            if (__gcd(a, c) == 1 && __gcd(b, c) == 1)
            {
                break;
            }
        }
        return a * b * c;
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else if (n == 2)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << max(solve(n), solve(n - 1));
    }
}