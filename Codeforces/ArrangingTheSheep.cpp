#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
            v.push_back(i);
    }
    ll num = v.size();
    if (num == 0)
    {
        cout << 0 << endl;
        return;
    }
    if (num & 1)
    {
        ll ans = 0;
        ll elem = v[num / 2];
        ll start = elem - (num - 1) / 2;
        for (int i = 0; i < num; i++, start++)
            ans += abs(start - v[i]);
        cout << ans << endl;
    }
    else
    {
        ll ans1 = 0;
        ll ans2 = 0;
        ll elem1 = v[num / 2];
        ll start1 = elem1 - num / 2;
        ll elem2 = v[num / 2 - 1];
        ll start2 = elem2 - (num / 2) + 1;
        for (int i = 0; i < num; i++, start1++)
            ans1 += abs(start1 - v[i]);
        for (int i = 0; i < num; i++, start2++)
            ans2 += abs(start2 - v[i]);
        cout<<min(ans1,ans2)<<endl;
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