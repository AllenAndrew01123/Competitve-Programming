#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<string> dict;
void precal()
{
    for (char c1 = 'a'; c1 <= 'z'; c1++)
    {
        for (char c2 = 'a'; c2 <= 'z'; c2++)
        {
            if (c1 != c2)
            {
                string t = "";
                t.push_back(c1);
                t.push_back(c2);
                dict.push_back(t);
            }
        }
    }
}
void solve()
{
    string s;
    cin >> s;
    cout << find(dict.begin(), dict.end(), s) - dict.begin()+1 << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    precal();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
