#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
bool check(string s, ll len)
{
    ll bl = s.length() / len;
    for (int i = 0; i < s.length(); i += len)
    {
        if (s.substr(i, len) != s.substr(0, len))
            return false;
    }
    return true;
}
void solve()
{
    string a, b;
    cin >> a >> b;
    ll n = a.length();
    ll m = b.length();
    ll g = __gcd(n, m);
    ll cnt = 0;
    for (int i = 1; i * i <= g; i++)
    {
        if (i * i != g)
        {
            if (check(a, i) && check(b, i) && (a.substr(0, i) == b.substr(0, i)))
                cnt++;
            if (check(a, g / i) && check(b, g / i) && (a.substr(0, g / i) == b.substr(0, g / i)))
                cnt++;
        }
        else
        {
            if (check(a, i) && check(b, i) && (a.substr(0, i) == b.substr(0, i)))
                cnt++;
        }
    }
    cout << cnt << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
}