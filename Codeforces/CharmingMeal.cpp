#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int mx = INT_MIN;
    int temp = n;
    while (temp--)
    {
        int mn = INT_MAX;
        for (int j = 0; j < n; j++)
        {
            mn = min(mn, abs(b[j] - a[j]));
        }
        mx = max(mx, mn);
        rotate(b.begin(), b.begin() + 1, b.end());
    }
    cout << mx << endl;
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