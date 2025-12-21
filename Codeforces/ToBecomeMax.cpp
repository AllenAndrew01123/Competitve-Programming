#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll l = 0, r = 1e9;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        for (int i = 0; i < n; i++)
        {
            ll cost = 0;
            ll temp = mid;
            bool flag = true;
            for (int j = i; j < n; j++)
            {
                if ((j == n - 1) && (v[j] < temp))
                {
                    flag = false;
                    break;
                }
                if (v[j] >= temp)
                    break;
                else
                {
                    cost += temp - v[j];
                    temp--;
                }
            }
            if (cost <= k && flag)
            {
                ans=mid;
                l=mid+1;
                break;
            }
            else if(i==n-1)
            {
                r=mid-1;
                break;
            }
        }
    }
    cout<<ans<<endl;
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