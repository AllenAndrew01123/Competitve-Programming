#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    map<char, ll> mp;
    for (int i = 0; i < s.length(); i++)
        mp[s[i]]++;
    ll cnt = 0;
    for (auto x : mp)
    {
        if (x.second & 1)
            cnt++;
    }
    if (cnt > 1)
        cout << "NO SOLUTION" << endl;
    else
    {
        string s1 = "", s2 = "", s3 = "";
        for (auto x : mp)
        {
            if (x.second & 1)
            {
                for (int i = 1; i <= x.second; i++)
                    s2.push_back(x.first);
            }
            else
            {
                for (int i = 1; i <= x.second / 2; i++)
                    s1.push_back(x.first);
            }
        }
        s3 = s1;
        reverse(s1.begin(), s1.end());
        cout << s3 + s2 + s1 << endl;
    }
}