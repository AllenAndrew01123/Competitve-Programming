#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    ll n1 = s1.length();
    ll n2 = s2.length();
    ll lcm = n1 * n2 / (__gcd(n1, n2));
    string temp1 = "";
    string temp2 = "";
    for (int i = 1; i <= lcm / n1; i++)
        temp1 += s1;
    for (int i = 1; i <= lcm / n2; i++)
        temp2 += s2;
    if (temp1 == temp2)
        cout << temp1 << endl;
    else
        cout << -1 << endl;
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
