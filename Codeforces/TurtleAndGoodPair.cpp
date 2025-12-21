#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char,int> mp;
    for(int i=0;i<n;i++)
        mp[s[i]]++;
    string ans="";
    ll cnt=0,target=mp.size();
    while(cnt!=target)
    {
        cnt=0;
        for(auto x:mp)
        {
            if(x.second==0)
            {
                continue;
            }
            else
            {
                ans+=x.first;
                mp[x.first]--;

            }
        }
        for(auto x:mp)
        {
            if(x.second==0)
            cnt++;
        }
    }
    cout<<ans<<endl;
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