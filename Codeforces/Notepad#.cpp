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
    map<string, ll> mp;
    for (int i = 0; i < n - 1; i++)
    {
        mp[s.substr(i, 2)]++;
        if (i>0 && s.substr(i - 1, 2) == s.substr(i, 2))
        {
            if (i > 1 && s.substr(i - 2, 2) == s.substr(i, 2))
            {
            }
            else
            {
                mp[s.substr(i, 2)]--;
            }
        }
        if (mp[s.substr(i, 2)] == 2)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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