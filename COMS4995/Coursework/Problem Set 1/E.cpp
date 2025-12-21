#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    string s;
    ll pos;
    cin >> s >> pos;
    ll n = s.length();
    ll word = 1;
    ll len = n;
    while (pos > len)
    {
        len += n - word;
        word++;
    }
    ll numOfChars = word - 1;
    ll idx = pos - (n * (n + 1) / 2 - (n - numOfChars) * (n - numOfChars + 1) / 2);
    vector<char> st;
    ll cnt = 0;
    for (auto x : s)
    {
        while (cnt<numOfChars&&!st.empty() && st.back() > x)
        {
            st.pop_back();
            cnt++;
        }
        st.push_back(x);
    }
    while(cnt<numOfChars)
    {
        st.pop_back();
        cnt++;
    }
    cout<<st[idx-1];
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