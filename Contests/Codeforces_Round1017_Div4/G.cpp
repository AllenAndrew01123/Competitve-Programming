#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    deque<ll> d;
    ll q;
    cin >> q;
    ll rizz = 0;
    ll sum = 0;
    bool rev = false;
    while (q--)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            if (d.empty())
                continue;
            if (!rev)
            {
                ll elem = d[d.size() - 1];
                rizz -= d.size() * elem;
                rizz += sum;
                d.pop_back();
                d.push_front(elem);
            }
            else
            {
                ll elem = d[0];
                rizz -= d.size()*elem;
                rizz += sum;
                d.pop_front();
                d.push_back(elem);
            }
        }
        else if (x == 2)
        {
            rizz = (d.size() + 1) * sum - rizz;
            rev = !rev;
        }
        else
        {
            ll k;
            cin >> k;
            if (!rev)
            {
                d.push_back(k);
                sum += k;
                rizz += d.size() * k;
            }
            else
            {
                d.push_front(k);
                sum += k;
                rizz += d.size() * k;
            }
        }
        cout << rizz << endl;
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