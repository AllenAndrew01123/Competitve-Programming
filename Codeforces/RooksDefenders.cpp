#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, q;
    cin >> n >> q;
    map<ll,ll>r1,c1;
    set<ll> r, c;
    for(int i=1;i<=n;i++)
    {
        r.insert(i);
        c.insert(i);
        r1[i]++;
        c1[i]++;
    }
    while (q--)
    {
        ll t;
        cin >> t;
        if (t == 1)
        {
            ll row, col;
            cin >> row >> col;
            r.erase(row);
            c.erase(col);
            r1[row]--;
            c1[col]--;
        }
        if (t == 2)
        {
            ll row, col;
            cin >> row >> col;
            r1[row]++;
            c1[col]++;
            if(r1[row]>0)
            r.insert(row);
            if(c1[col]>0)
            c.insert(col);
        }
        if (t == 3)
        {
            ll x1, x2, y1, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            if(*r.lower_bound(x1)>x2||*c.lower_bound(y1)>y2)
            cout<<"Yes\n";
            else
            cout<<"No\n";
        }
    }
}