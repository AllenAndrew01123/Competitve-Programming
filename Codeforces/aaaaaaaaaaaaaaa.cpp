#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    map<ll,vector<ll>>mp;
    ll q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "ADD")
        {
            ll x;cin>>x;
            for(int i=1;i*i<=x;i++)
            {
                if(x%i==0)
                {
                    if(i*i==x)
                    mp[i].push_back(x);
                    else
                    {
                        mp[i].push_back(x);
                        mp[x/i].push_back(x);
                    }
                }
            }
        }
        else
        {
            ll a,b,m;cin>>a>>b>>m;
            cout<<upper_bound(mp[m].begin(),mp[m].end(),b)-lower_bound(mp[m].begin(),mp[m].end(),a)<<endl;
        }
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}
