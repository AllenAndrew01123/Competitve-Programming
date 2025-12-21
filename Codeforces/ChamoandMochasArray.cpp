#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    int n;
    cin >> n;
    int a[n + 1],b[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i]=a[i];
    }
    sort(a + 1, a + n + 1);
    int ans = a[(n + 1) / 2];
    if (n == 2)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 1; i <= n - 2; i++)
    {
        vector<int> v;
        v.push_back(b[i]);
        v.push_back(b[i+1]);
        v.push_back(b[i+2]);
        sort(v.begin(),v.end());
        ans=max(ans,v[1]);
    }
    cout << ans << endl;
    return;
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