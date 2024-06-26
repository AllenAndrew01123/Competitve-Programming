#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int mx = 0;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
        mx=max(a,mx);
    }
    if (s.size() > k)
    {
        cout << -1 << endl;
        return;
    }
    vector<int>arr;
    for(int d:s)
    {
        arr.push_back(d);
    }
    for(int i=arr.size();i<=k;i++)
    {
        arr.push_back(mx);
    }
    cout << n*k << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = k - 1; j >= 0; j--)
            cout << arr[j] << " ";
    }
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