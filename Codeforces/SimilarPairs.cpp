#include <bits/stdc++.h>
using namespace std;
// #define int long long;
void solve(int n)
{
    vector<int> odd;
    vector<int> even;
    int i, j;
    for (i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        if (p % 2 == 0)
            even.push_back(p);
        else
            odd.push_back(p);
    }
    int e = even.size();
    int o = odd.size();
    // cout<<e<<" "<<o<<endl;
    if (e % 2 == 0 && o % 2 == 0)
        cout << "YES\n";
    else
    {
        int c = 0;
        for (i = 0; i < e; i++)
        {
            for (j = 0; j < o; j++)
            {
                if (abs(even[i] - odd[j]) == 1)
                    c++;
            }
        }
        if (c >= 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
}