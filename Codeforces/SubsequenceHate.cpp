#include <bits/stdc++.h>
using namespace std;
void solve()
{

    int E=0, Z=0, e=0, z=0, ans;
    string s;
    cin >> s;
    Z = E = e = z = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            Z++;
        else
            E++;
    }
    ans = 1e9;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            z++;
        else
            e++;
        ans = min(ans, e + Z - z);
        ans = min(ans, z + E - e);
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}