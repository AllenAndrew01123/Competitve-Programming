#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    if (n & 1)
    {
        vector<ll> mx, mn;
        mx.push_back(v[0]);
        mn.push_back(v[0]);
        for (int i = 1; i < n; i += 2)
        {
            mx.push_back(max(v[i], v[i + 1]));
            mn.push_back(min(v[i], v[i + 1]));
        }
        for (int i = mx.size() - 1; i >= 1; i--)
        {
            if (mn[i] < mx[i - 1])
            {
                cout << "NO" << endl;
                return;
            }
        }
        cout<<"YES"<<endl;
    }
    else
    {
        vector<ll> mx, mn;
        for (int i = 0; i < n; i += 2)
        {
            mx.push_back(max(v[i], v[i + 1]));
            mn.push_back(min(v[i], v[i + 1]));
        }
        for (int i = mx.size() - 1; i >= 1; i--)
        {
            if (mn[i] < mx[i - 1])
            {
                cout << "NO" << endl;
                return;
            }
        }
        cout<<"YES"<<endl;
    }
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
