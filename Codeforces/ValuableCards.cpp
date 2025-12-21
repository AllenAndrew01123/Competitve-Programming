#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll cnt = 1;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    set<ll> s;
    for (int i = 0; i < n; i++)
    {
        if ((k % a[i]) != 0)
            continue;
        else
        {
            if (s.find(a[i]) == s.end())
            {
                for (auto x : s)
                {
                    if(x%a[i]==0)
                    s.insert(x / a[i]);
                }
            }
            else
            {
                cnt++;
                s.clear();
            }
            s.insert(k / a[i]);
        }
    }
    cout << cnt << endl;
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