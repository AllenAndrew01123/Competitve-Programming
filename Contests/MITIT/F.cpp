#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
string build(ll X, ll Y, ll Z, char first, map<char, ll> mp)
{
    string mit = "MIT";
    ll n = mp['M'] + mp['I'] + mp['T'];
    string s = "";
    if (mp[first] == 0)
        return "";
    mp[first]--;
    s.push_back(first);
    for (ll idx = 1; idx < n; idx++)
    {
        vector<ll> v = {0, 1, 2};
        sort(v.begin(), v.end(), [&](ll a, ll b)
             { return mp[mit[a]] > mp[mit[b]]; });
        bool ok = false;
        for (auto k : v)
        {
            if (!mp[mit[k]])
                continue;
            ll sz = s.size();
            if (sz && s.back() == mit[k])
                continue;
            if (sz >= 2)
            {
                char a = s[sz - 2], b = s[sz - 1];
                if ((a == 'M' && b == 'I' && mit[k] == 'T') || (a == 'T' && b == 'I' && mit[k] == 'M'))
                    continue;
            }
            mp[mit[k]]--;
            ll rem = n - (sz + 1);
            if (rem > 0 && sz)
            {
                char last = s.back();
                if (last == 'M' && mit[k] == 'I' && mp['M'] == 0)
                {
                    mp[mit[k]]++;
                    continue;
                }
                if (last == 'T' && mit[k] == 'I' && mp['T'] == 0)
                {
                    mp[mit[k]]++;
                    continue;
                }
            }
            ll mx = max({mp['M'], mp['I'], mp['T']});
            if (mx <= (rem + 1) / 2)
            {
                s.push_back(mit[k]);
                ok = true;
                break;
            }
            mp[mit[k]]++;
        }
        if (!ok)
            return "";
    }
    return s;
}
void solve()
{
    ll X, Y, Z;
    cin >> X >> Y >> Z;
    ll n = X + Y + Z;
    map<char, ll> mp;
    mp['M'] = X;
    mp['I'] = Y;
    mp['T'] = Z;
    if (max({X, Y, Z}) > (n + 1) / 2)
    {
        cout << "NO\n";
        return;
    }
    for (auto x : mp)
    {
        string s = build(X, Y, Z, x.first, mp);
        if (!s.empty())
        {
            cout << "YES\n";
            cout << s << "\n";
            return;
        }
    }
    cout << "NO\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
        solve();
}
