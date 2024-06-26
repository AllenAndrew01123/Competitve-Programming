#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    string s = "";
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x == i)
            s.push_back('1');
        else
            s.push_back('0');
    }
    if (count(s.begin(), s.end(), '1') == n)
    {
        cout << 0 << endl;
        return;
    }
    int l, r;
    for (l = 0; l < s.length(); l++)
    {
        if (s[l] != '1')
            break;
    }
    for (r = s.length() - 1; r >= 0; r--)
    {
        if (s[r] != '1')
            break;
    }
    if (count(s.begin() + l, s.begin() + r+1, '0') == r-l+1)
    {
        cout << 1 << endl;
        return;
    }
    else
    {
        cout << 2 << endl;
        return;
    }
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