#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, k;
    cin >> n >> k;
    ll a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    ll l = 0, r = 3e9;
    ll ans;
    while (l <= r)
    {
        ll mid = r - (r - l) / 2;
        bool flag = true;
        ll temp=k;
        for (int i = 0; i < n; i++)
        {
            if (b[i] / a[i] >= mid)
                continue;
            else if (temp >= (a[i] * mid - b[i]))
                temp -= a[i] * mid - b[i];
            else
            {
                flag = !flag;
                break;
            }
        }
        if (flag)
        {
            l = mid + 1;
            ans = mid;
        }
        else
            r = mid - 1;
        // cout<<mid<<" "<<temp<<endl;
    }
    cout << ans << endl;
}