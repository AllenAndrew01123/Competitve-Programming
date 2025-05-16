#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    map<string, ll> mp;
    for (int i = 0; i < n; i++)
    {
        string temp = v[i];
        reverse(temp.begin(), temp.end());
        if (v[i] == temp || mp.find(temp) != mp.end())
        {
            cout << "YES\n";
            return;
        }
        if (v[i].length() == 2)
        {
            for (char c = 'a'; c <= 'z'; c++)
            {
                string a = temp + c;
                if (mp.find(a) != mp.end())
                {
                    cout << "YES\n";
                    return;
                }
            }
        }
        else
        {
            string a = temp.substr(0, 2);
            if (mp.find(a) != mp.end())
            {
                cout << "YES\n";
                return;
            }
        }
        mp[v[i]]++;
    }
    cout << "NO\n";
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
