#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string s1 = "1", s2 = "1";
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != '1' && !flag)
        {
            if (s[i] == '2')
            {
                s1.push_back('1');
                s2.push_back('1');
            }
            else
            {
                s1.push_back('0');
                s2.push_back('0');
            }
        }
        else if (s[i] == '1' && !flag)
        {
            s1.push_back('1');
            s2.push_back('0');
            flag = true;
        }
        else
        {
            s1.push_back('0');
            s2.push_back(s[i]);
        }
    }
    cout << s1 << endl
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