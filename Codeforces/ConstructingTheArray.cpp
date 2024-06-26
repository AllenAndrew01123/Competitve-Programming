#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    set<pair<int, int>> s;
    s.insert({-(n), 1});
    for (int i = 1; i <= n; i++)
    {
        int len = -(s.begin()->first);
        int left = s.begin()->second;
        int right = len + left - 1;
        int mid = (left + right) / 2;
        v[mid] = i;
        s.erase(s.begin());
        s.insert({left - mid, left});
        s.insert({mid - right, mid + 1});
    }
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
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