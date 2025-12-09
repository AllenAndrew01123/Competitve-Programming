#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    string s;
    cin >> s;
    map<char, vector<ll>> mp;
    for (int i = 0; i < s.length(); i++)
        mp[s[i]].push_back(i);
    vector<ll> ans;
    if (s[0] < s[s.length() - 1])
    {
        for (char c = s[0]; c <= s[s.length() - 1]; c++)
        {
            if (mp.find(c) == mp.end())
                continue;
            else
            {
                for (auto x : mp[c])
                    ans.push_back(x);
            }
        }
    }
    else
    {
        for (char c = s[0]; c >= s[s.length() - 1]; c--)
        {
            if (mp.find(c) == mp.end())
                continue;
            else
            {
                for (auto x : mp[c])
                    ans.push_back(x);
            }
        }
    }
    ll cost = 0;
    for (int i = 1; i < ans.size(); i++)
    {
        // cout<<s[i]<<" "<<s[i-1]<<" "<<abs(s[i] - s[i - 1])<<endl;
        cost += abs(s[ans[i]] - s[ans[i - 1]]);
        // cout << cost << endl;
    }
    cout << cost << " " << ans.size() << endl;
    for (auto x : ans)
        cout << x + 1 << " ";
    cout << endl;
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