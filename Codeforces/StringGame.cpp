#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    string a, b;
    cin >> a >> b;
    ll n = a.length();
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll l = 0, r = n, ans = 0;
    while (l <= r)
    {
        string temp = a;
        ll mid = l + (r - l) / 2;
        for (int i = 0; i < mid; i++)
            temp[arr[i]-1] = '0';
        ll idx = 0;
        for (int i = 0; i < n;)
        {
            if (temp[i] == '0')
            {
                i++;
            }
            else
            {
                if (temp[i] == b[idx])
                    idx++;
                i++;
            }
        }
        if (idx == b.length())
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout<<ans<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}