#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll h, w, xa, ya, xb, yb;
    cin >> h >> w >> xa >> ya >> xb >> yb;
    if (xb <= xa)
    {
        cout << "Draw\n";
        return;
    }
    if ((xb - xa) & 1)
    {
        ll turns_bob=(xb-xa)/2;
        ll turns_alice=xb-xa-turns_bob;
        if (yb >= ya)
        {
            if (min(yb+turns_bob,w)<=min(ya+turns_alice,w) || yb-ya<=1)
            {
                cout << "Alice\n";
                return;
            }
            cout << "Draw\n";
            return;
        }
        else
        {
            if (max(yb-turns_bob,1LL)>=max(ya-turns_alice,1LL) || ya-yb<=1)
            {
                cout << "Alice\n";
                return;
            }
            cout << "Draw\n";
            return;
        }
    }
    else
    {
        ll turns_bob=(xb-xa)/2;
        ll turns_alice=turns_bob;
        if (yb >= ya)
        {
            if (max(yb-turns_bob,1LL)<=max(ya-turns_alice,1LL) || yb==ya)
            {
                cout << "Bob\n";
                return;
            }
            cout << "Draw\n";
            return;
        }
        else
        {
            if (min(yb+turns_bob,w)>=min(ya+turns_alice,w))
            {
                cout << "Bob\n";
                return;
            }
            cout << "Draw\n";
            return;
        }
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