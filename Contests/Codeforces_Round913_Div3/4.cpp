#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool check(int a[][2], int k, int n)
{
    int left = 0, right = 0;
    for (int i = 0; i < n; i++)
    {
        left -= k;
        right += k;
        if (right < a[i][0] || a[i][1] < left)
        {
            return false;
        }
        if (left < a[i][0])
            left = a[i][0];
        if (right > a[i][1])
            right = a[i][1];
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    int a[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1];
    }
    int l = 0, r = 1e9;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(a,mid,n))
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l << endl;
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