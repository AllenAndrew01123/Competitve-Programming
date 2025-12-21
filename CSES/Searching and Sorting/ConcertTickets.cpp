#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, m;
    cin >> n >> m;
    multiset<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;cin>>x;
        v.insert(x);
    }
    while (m--)
    {
        ll x;
        cin >> x;
        if (v.upper_bound(x) == v.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            auto itr=--(v.upper_bound(x));
            cout<<*(itr)<<endl;
            v.erase(itr);
        }
    }
}