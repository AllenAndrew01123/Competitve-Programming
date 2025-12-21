#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
            v[i] = 2;
        else if (s1[i] == '0')
            v[i] = 1;
        else
            v[i] = 0;
    }
    ll ans = 0;
    for (int i = 0; i < n;)
    {
        if (v[i] == 2)
        {
            ans += 2;
            i++;
        }
        else if (i == n - 1)
        {
            if (v[i] == 1)
                ans += 1;
            i++;
        }
        else
        {
            if (v[i] == v[i + 1] && v[i] == 1)
            {
                ans++;
                i++;
            }
            else if (v[i] == v[i + 1] && v[i] == 0)
            {
                i++;
            }
            else if((v[i]==0 && v[i+1]==1) || (v[i]==1 && v[i+1]==0))
            {
                ans += 2;
                i += 2;
            }
            else
            {
                ans+=v[i];
                i++;
            }
        }
    }
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
