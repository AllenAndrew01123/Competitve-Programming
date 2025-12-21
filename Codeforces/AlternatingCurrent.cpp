#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    string s;
    cin >> s;
    if (s.length() & 1)
    {
        cout << "NO" << endl;
        return;
    }
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (st.empty())
        {
            st.push(s[i]);
            continue;
        }
        if (st.top() == s[i])
            st.pop();
        else
            st.push(s[i]);
    }
    if (st.empty())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}