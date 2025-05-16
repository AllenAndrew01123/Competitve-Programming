#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll k;
    cin >> k;
    string s;
    cin >> s;
    ll n = s.length();
    ll sum=0;
    ll ans=0;
    map<ll,ll>mp;
    mp[0]++;
    for(int i=0;i<n;i++)
    {
        sum+=(s[i]=='1');
        if(mp.find(sum-k)!=mp.end())
        ans+=mp[sum-k];
        mp[sum]++;
    }
    cout<<ans<<endl;
}