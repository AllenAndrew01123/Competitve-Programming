#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll l = 1, r = n + 1, ans=0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll cnt = 0;
        vector<ll> freq(n + 1);
        ll mex = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < mid)
            {
                freq[arr[i]]++;
                while (freq[mex] > 0)
                    mex++;
                if (mex >= mid)
                {
                    cnt++;
                    for (int j = 0; j < mid; j++)
                        freq[j] = 0;
                    mex = 0;
                }
            }
        }
        if (cnt >= k)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;
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
