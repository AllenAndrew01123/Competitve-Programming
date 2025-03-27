#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    string s;
    cin >> s;
    s = 'A' + s;
    vector<ll> v;
    ll counta = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            counta++;
        }
        else
        {
            if (s[i - 1] == 'A')
            {
                if (counta)
                    v.push_back(counta);
                counta = 0;
            }
        }
    }
    if (counta)
        v.push_back(counta);
    if (v.empty() || (*max_element(v.begin(), v.end()) == s.size() - 1))
    {
        cout << 0 << endl;
        return;
    }
    ll countb = 0;
    bool flag = false;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == 'B')
        {
            countb++;
        }
        else
        {
            if (countb > 1)
                flag = true;
            countb = 0;
        }
    }
    if (countb > 1)
        flag = true;
    ll ans = accumulate(v.begin(), v.end(), 0LL);
    if (s[1] == 'A' && s[s.size() - 1] == 'A' && !flag)
        cout << ans - *(min_element(v.begin(), v.end()))<<endl;
    else
        cout << ans << endl;
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
