#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int remove, i, add;
    vector<int> v;
    for (i = 0; pow(2, i) <= n; i++)
    {
        v.push_back(pow(2, i));
        if (v[i] <= k)
        {
            remove = i;
            add = v[i];
        }
    }
    v.erase(v.begin() + remove);
    v.push_back(k - add);
    v.push_back(k + 1);
    v.push_back(k + 1 + add);
    sort(v.begin(),v.end());
    cout << v.size() << endl;
    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j] << " ";
    }
    cout << endl;
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