#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
bool sqrcheck(vector<vector<char>> v, ll n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == '#')
            {
                if (j == n - 1 || i == n - 1)
                    return false;
                return (v[i][j + 1] == '#' && v[i + 1][j] == '#' && v[i + 1][j + 1] == '#');
            }
        }
    }
}
void solve()
{
    ll n;
    cin >> n;
    vector<vector<char>> v(n, vector<char>(n));
    map<ll, ll> mp1, mp2;
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
            if (v[i][j] == '#')
            {
                mp1[i + j]++;
                mp2[j - i]++;
                cnt++;
            }
        }
    }
    if (n <= 2 || cnt==0)
    {
        cout << "YES\n";
        return;
    }
    if (cnt == 4)
    {
        if (sqrcheck(v, n))
        {
            cout << "YES\n";
            return;
        }
    }
    // cout<<mp1.size()<<" "<<mp2.size()<<endl;
    if (mp1.size() > 2 && mp2.size() > 2)
    {
        cout << "NO\n";
        return;
    }
    if (mp1.size() == 1)
    {
        cout << "YES\n";
        return;
    }
    if (mp2.size() == 1)
    {
        cout << "YES\n";
        return;
    }
    if (mp1.size() == 2)
    {
        if (mp1.rbegin()->first - mp1.begin()->first == 1)
        {
            cout << "YES\n";
            return;
        }
    }
    if (mp2.size() == 2)
    {
        if (mp2.rbegin()->first - mp2.begin()->first == 1)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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
