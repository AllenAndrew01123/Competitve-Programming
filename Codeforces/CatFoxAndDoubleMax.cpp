#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    int a[n + 1];
    vector<int> odd;
    vector<int> even;
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] == n && i & 1)
            flag = true;
    }
    if (flag)
        reverse(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            odd.push_back(a[i]);
        }
        else
        {
            even.push_back(a[i]);
        }
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    map<int, int> mp;
    int p = n / 2;
    for (int i = 0; i < odd.size(); i++, p--)
    {
        mp[odd[i]] = p;
    }
    p = n;
    for (int i = 0; i < even.size(); i++, p--)
    {
        mp[even[i]] = p;
    }
    int b[n + 1];
    for (int i = 1; i <= n; i++)
    {
        b[i] = mp[a[i]];
    }
    if (flag)
        reverse(b + 1, b + n + 1);
    for (int i = 1; i <= n; i++)
        cout << b[i] << " ";
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