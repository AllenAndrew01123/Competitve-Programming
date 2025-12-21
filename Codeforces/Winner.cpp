#include <bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    string a[n];
    int sc[n];
    map<string, int> mp,mp1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> sc[i];
        mp[a[i]] += sc[i];
    }
    int m = -1;
    for (auto x : mp)
    {
        m = max(m, x.second);
    }
    for (int i = 0; i < n; i++)
    {
      
        if ((mp1[a[i]] + sc[i] >= m)&& mp[a[i]]==m)
        {
            cout << a[i];
            break;
        }
        mp1[a[i]] += sc[i];

    }
}