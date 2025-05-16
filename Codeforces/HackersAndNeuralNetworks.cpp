#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    map<ll, ll> mp;
    vector<ll> count(m);
    for (int i = 0; i < m; i++)
    {
        ll cnt = 0;
        for (int j = 0; j < n; j++)
        {
            string s;
            cin >> s;
            if (s == v[j])
            {
                cnt++;
                mp[j]++;
            }
        }
        count[i] = cnt;
    }
    if (mp.size() != n)
        cout << -1 << endl;
    else
    {
        ll mx=*max_element(count.begin(),count.end());
        cout<<n+2*(n-mx)<<endl;
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