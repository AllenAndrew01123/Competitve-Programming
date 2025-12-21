#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    long long ans = 0;
    for (char i = '0'; i <= '9'; i++)
    {
        for (char j = '0'; j <= '9'; j++)
        {
            long long first = 0, second = 0;
            if (i == j)
            {
                ans = max(ans, (long long)count(s.begin(), s.end(), i));
            }
            else
            {
                for (int k = 0; k < s.length(); k++)
                {
                    if (s[k] == i && first==second)
                        first++;
                    else if (s[k] == j && first > second)
                        second++;
                }
                if (first == second)
                    ans = max(ans, 2 * first);
                else
                    ans = max(ans, 2 * (first - 1));
            }
        }
    }
    cout << s.length() - ans << endl;
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