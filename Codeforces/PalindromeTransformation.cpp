#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, p;
    cin >> n >> p;
    string s;
    cin >> s;
    s = '0' + s;
    ll ans = 0;
    vector<ll> indices;
    if (n & 1)
    {
        if (p <= n / 2)
        {
            for (int i = 1; i <= n / 2; i++)
            {
                ll x = min(abs(s[i] - s[n - i + 1]), 26 - abs(s[i] - s[n + 1 - i]));
                if (x != 0)
                {
                    ans += x;
                    indices.push_back(i);
                }
            }
            if (!indices.empty())
            {
                ll mn = indices[0];
                ll mx = indices[indices.size() - 1];
                if (mn <= p && p <= mx)
                    ans += min(2 * (p - mn) + (mx - p), 2 * (mx - p) + p - mn);
                else if (p > mx)
                    ans += p - mn;
                else
                    ans += mx - p;
            }
        }
        else
        {
            for (int i = (n + 1) / 2; i <= n; i++)
            {
                ll x = min(abs(s[i] - s[n - i + 1]), 26 - abs(s[i] - s[n + 1 - i]));
                if (x != 0)
                {
                    ans += x;
                    indices.push_back(i);
                }
            }
            if (!indices.empty())
            {
                ll mn = indices[0];
                ll mx = indices[indices.size() - 1];
                if (mn <= p && p <= mx)
                    ans += min(2 * (p - mn) + (mx - p), 2 * (mx - p) + p - mn);
                else if (p > mx)
                    ans += p - mn;
                else
                    ans += mx - p;
            }
        }
    }
    else
    {
        if (p <= n / 2)
        {
            for (int i = 1; i <= n / 2; i++)
            {
                ll x = min(abs(s[i] - s[n - i + 1]), 26 - abs(s[i] - s[n + 1 - i]));
                if (x != 0)
                {
                    ans += x;
                    indices.push_back(i);
                }
            }
            if (!indices.empty())
            {
                ll mn = indices[0];
                ll mx = indices[indices.size() - 1];
                if (mn <= p && p <= mx)
                    ans += min(2 * (p - mn) + (mx - p), 2 * (mx - p) + p - mn);
                else if (p > mx)
                    ans += p - mn;
                else
                    ans += mx - p;
            }
        }
        else
        {
            for (int i = n / 2 + 1; i <= n; i++)
            {
                ll x = min(abs(s[i] - s[n - i + 1]), 26 - abs(s[i] - s[n + 1 - i]));
                if (x != 0)
                {
                    ans += x;
                    indices.push_back(i);
                }
            }
            if (!indices.empty())
            {
                ll mn = indices[0];
                ll mx = indices[indices.size() - 1];
                if (mn <= p && p <= mx)
                    ans += min(2 * (p - mn) + (mx - p), 2 * (mx - p) + p - mn);
                else if (p > mx)
                    ans += p - mn;
                else
                    ans += mx - p;
            }
        }
    }
    cout << ans << endl;
}