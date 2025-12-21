#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n, x;
    cin >> n >> x;
    map<ll, vector<ll>> mp;
    for (int i = 1; i <= n; i++)
    {
        ll t;cin>>t;
        mp[t].push_back(i);
    }
    for (auto y : mp)
    {
        if (mp.find(x - y.first) != mp.end())
        {
            if (x % 2 == 0 && y.first==x/2 && y.second.size()==1)
                continue;
            else
            {
                ll n1 = y.first;
                ll n2 = x - y.first;
                if (n1 != n2)
                {
                    cout << *mp[n1].begin() << " " << *mp[n2].begin() << endl;
                    return 0;
                }
                else
                {
                    cout << *mp[n1].begin() << " " << *(++mp[n1].begin()) << endl;
                    return 0;
                }
            }
        }
    }
    cout<<"IMPOSSIBLE\n";
}