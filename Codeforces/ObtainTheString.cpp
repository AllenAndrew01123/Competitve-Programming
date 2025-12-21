#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    string s, t;
    cin >> s >> t;
    map<char, vector<ll>> mp;
    for (int i = 0; i < s.length(); i++)
        mp[s[i]].push_back(i);
    ll cnt=1;
    ll idx=-1;
    for (int i = 0; i < t.length(); i++)
    {
        if(mp.find(t[i])==mp.end())
        {
            cout<<-1<<endl;
            return;
        }
        if(upper_bound(mp[t[i]].begin(),mp[t[i]].end(),idx)==mp[t[i]].end())
        {
            cnt++;
            idx=mp[t[i]][0];
        }
        else
        {
            idx=*upper_bound(mp[t[i]].begin(),mp[t[i]].end(),idx);
        }
        // cout<<idx<<" "<<cnt<<endl;
    }
    cout<<cnt<<endl;
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