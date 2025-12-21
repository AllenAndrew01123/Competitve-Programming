#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    string s;
    cin >> s;
    if (s[0] != '1' || s[s.length() - 1] == '9')
    {
        cout << "NO\n";
        return;
    }
    for (int i = 1; i < s.length() - 1; i++)
    {
        if (s[i] == '0')
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    
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