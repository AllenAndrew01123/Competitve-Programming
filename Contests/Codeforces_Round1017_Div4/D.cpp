#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    vector<ll> v1, v2;
    char c1 = s1[0];
    ll counter1 = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (c1 == s1[i])
            counter1++;
        else
        {
            v1.push_back(counter1);
            c1 = s1[i];
            counter1 = 1;
        }
    }
    v1.push_back(counter1);
    char c2 = s2[0];
    ll counter2 = 0;
    for (int i = 0; i < s2.length(); i++)
    {
        if (c2 == s2[i])
            counter2++;
        else
        {
            v2.push_back(counter2);
            c2 = s2[i];
            counter2 = 1;
        }
    }
    v2.push_back(counter2);
    if (s1[0] != s2[0] || v1.size() != v2.size())
    {
        cout << "NO\n";
        return;
    }
    for (int i = 0; i < v1.size(); i++)
    {
        if ((v2[i] >= v1[i]) && (v2[i] <= 2 * v1[i]))
            continue;
        else
        {
            cout << "NO\n";
            return;
        }
    }
    cout<<"YES\n";
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