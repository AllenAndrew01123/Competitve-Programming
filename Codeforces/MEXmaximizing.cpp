#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, x;
    cin >> n >> x;
    map<ll, ll> mp;
    set<pair<ll, ll>> s;
    for (int i = 0; i < x; i++)
    {
        s.insert({make_pair(0, i)});
        mp[i] = 0;
    }
    while (n--)
    {
        ll num;
        cin >> num;
        auto it=s.lower_bound(make_pair(mp[num%x],num%x));
        s.erase(it);
        mp[num%x]++;
        s.insert(make_pair(mp[num%x],num%x));
        cout<<(s.begin()->first)*x+(s.begin()->second)<<endl;
    }
}