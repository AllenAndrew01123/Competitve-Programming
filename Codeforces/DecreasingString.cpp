#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    string s;
    ll pos;
    cin >> s >> pos;
    pos--;
    ll currlen = s.length();
    bool flag = pos < currlen;
    vector<char> st;
    s += '0';
    for (auto x : s)
    {
        while (!flag && st.size() > 0 && st.back() > x)
        {
            pos -= currlen;
            currlen--;
            st.pop_back();
            flag = pos < currlen;
        }
        st.push_back(x);
    }
    cout<<st[pos];
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