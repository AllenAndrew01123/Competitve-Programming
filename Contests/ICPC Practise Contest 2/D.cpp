#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll finder(ll n)
{
    if(n==0)
    {
        return 0LL;
    }
    ll bits;
    for (int i = 31; i >= 0; i--)
    {
        if ((n >> i) & 1)
        {
            bits = i + 1;
            break;
        }
    }
    ll ans = 0;
    for (int i = 1; i < bits; i++)
    {
        ll cnt = 0;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                if (j * j == i)
                    cnt++;
                else
                    cnt += 2;
            }
        }
        ans += cnt;
    }
    for (int i = 1; i <= bits; i++)
    {
        if (bits % i == 0)
        {

            string s = "";
            while (s.length() < bits)
            {
                for (int k = 1; k <= i && s.length() < bits; k++)
                    s.push_back('1');
                for (int k = 1; k <= i && s.length() < bits; k++)
                    s.push_back('0');
            }
            int num = stoi(s, nullptr, 2);
            if (num <= n)
                ans++;
        }
    }
    return ans;
}
void solve()
{
    ll l, r;
    cin >> l >> r;
    cout << finder(r)-finder(l-1)<< endl;
    // cout<<finder(l - 1) << endl;
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