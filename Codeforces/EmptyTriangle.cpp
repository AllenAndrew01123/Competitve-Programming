#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
vector<ll>v={1,2,3};
ll calc(ll diag1, ll x, ll diag2)
{
    ll ans;
    cout << "? " << diag1 << " " << x << " " << diag2 << endl;
    cin >> ans;
    return ans;
}
void solve()
{
    ll n;cin>>n;
    while (true)
    {
        ll temp = calc(v[0],v[1],v[2]);
        if (temp == 0)
        {
            cout << "! " << v[0] << " " << v[1] << " " << v[2] << endl;
            v={1,2,3};
            return;
        }
        else
        {
            v[1]=temp;
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
