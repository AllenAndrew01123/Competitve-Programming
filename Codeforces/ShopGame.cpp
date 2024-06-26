#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> &p, pair<int, int> &q)
{
    if (p.first - p.second> q.first-q.second)
        return true;
    else
        return false;
}
void solve()
{
    long long n, k;
    cin >> n >> k;
    long long a[n], b[n];
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    long long prof = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= b[i])
        {
            v.push_back({b[i], a[i]});
            prof -= a[i];
        }
    }
    if (v.size() <= k)
    {
        cout << 0 << endl;
        return;
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = k; i < v.size(); i++)
    {
        prof += v[i].first;
    }
    if (prof >= 0)
        cout << prof<<endl;
    else
        cout << 0<<endl;
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