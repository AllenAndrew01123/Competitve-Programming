#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    set<ll> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s.insert(i);
    }
    vector<ll> bitsneeded, bitsremove;
    for (int i = 32; i >= 0; i--)
    {
        if ((k >> i) & 1)
            bitsneeded.push_back(i);
        else
            bitsremove.push_back(i);
    }
    for (auto x : bitsneeded)
    {
        for (int i = 0; i < n; i++)
        {
            if ((((arr[i]) >> x) & 1)==0)
                s.erase(i);
        }
    }
    for (auto x : bitsremove)
    {
        ll cnt = 0;
        for (auto y : s)
        {
            if (((arr[y]) >> x) & 1)
                cnt++;
        }
        if (cnt == s.size())
        {
            cout << "NO\n";
            return;
        }
    }
    cout<<"YES\n";
    // cout << s.size()<<endl;
    // for (auto x : s)
    // {
    //     cout << x + 1 << " ";
    // }
    // cout << endl;
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