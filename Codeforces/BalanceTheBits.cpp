#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            cnt++;
    }
    if (cnt & 1 || s[0] == '0' || s[n - 1] == '0')
    {
        cout << "NO\n";
        return;
    }
    ll k = (n - cnt) / 2;
    ll j = 0;
    string s1 = "", s2 = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (k > 0)
            {
                s1.append("(");
                s2.append("(");
                k--;
            }
            else
            {
                s1.append(")");
                s2.append(")");
            }
        }
        else
        {
            if (j & 1)
            {
                s1.append("(");
                s2.append(")");
            }
            else
            {
                s1.append(")");
                s2.append("(");
            }
            j++;
        }
    }
    cout << "YES\n"
         << s1 << endl
         << s2 << endl;
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