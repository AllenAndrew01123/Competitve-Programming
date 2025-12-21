#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    bool flag =true;
    int z=0,o=0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '?' && s[i % k] != '?' && s[i] != s[i % k])
            flag=false;
        if (s[i] != '?')
            s[i % k] = s[i];
    }
    for (int i = 0; i < k; i++)
    {
        if(s[i]=='0')
        z++;
        else if(s[i]=='1')
        o++;
    }
    cout << ((flag && z <= k / 2 && o <= k / 2) ? "YES\n" : "NO\n");
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