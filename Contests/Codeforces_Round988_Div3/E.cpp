#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll query(ll l, ll r)
{
    cout << "? " << l << " " << r << endl;
    cout.flush();
    ll x;
    cin >> x;
    return x;
}
void solve()
{
    ll n;
    cin >> n;
    string ans;
    bool flag = true;
    ll cnt1 = 0;
    ll cnt0 = 0;
    for (int i = 1; i < n; i++)
    {
        ll cnt1new = query(1, i + 1);
        if (flag)
        {
            if (cnt1new > i)
            {
                cout << "! IMPOSSIBLE" << endl;
                return;
            }
            if (cnt1new == 0)
                continue;
            else
            {
                for (int j = 1; j <= i - cnt1new; j++)
                    ans.push_back('1');
                for (int j = 1; j <= cnt1new; j++)
                    ans.push_back('0');
            }
            ans.push_back('1');
            flag = false;
            cnt1 = cnt1new;
            cnt0 = cnt1new;
        }
        else
        {
            if (cnt1new > cnt1)
            {
                if (cnt1new - cnt1 == cnt0)
                {
                    ans.push_back('1');
                }
                else
                {
                    cout << "! IMPOSSIBLE" << endl;
                    return;
                }
            }
            else if (cnt1new == cnt1)
            {
                ans.push_back('0');
                cnt0++;
            }
            else
            {
                cout << "! IMPOSSIBLE" << endl;
                return;
            }
            cnt1 = cnt1new;
        }
    }
    if (ans.size() < n)
    {
        cout << "! IMPOSSIBLE" << endl;
        return;
    }

    cout << "! " << ans << endl;
    cout.flush();
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