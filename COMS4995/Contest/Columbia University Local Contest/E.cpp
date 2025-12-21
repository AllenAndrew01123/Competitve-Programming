#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    string s;
    cin >> s;
    string finder = "AHIMOTUVWXY";
    map<char, ll> mp;
    for (auto c : finder)
    {
        mp[c]++;
    }
    for (auto c : s)
    {
        if (mp.find(c) == mp.end())
        {
            cout << "INVALID\n";
            return;
        }
    }
    string temp = s;
    reverse(s.begin(), s.end());
    if (s == temp)
        cout << s << endl;
    else
        cout << "INVALID\n";
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}