#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    ll n = s.length();
    vector<ll> lps(n, 0);
    lps[0] = 0;
    ll idx = 1, len = 0;
    while (idx < n)
    {
        if (s[idx] == s[len])
        {
            len++;
            lps[idx] = len;
            idx++;
        }
        else
        {
            if (len != 0)
                len = lps[len - 1];
            else
            {
                lps[idx] = 0;
                idx++;
            }
        }
    }
    ll x=lps[n-1];
    map<ll,ll>mp;
    for(int i=1;i<n-1;i++)
    mp[lps[i]]++;
    while(x>0)
    {
        if(mp.find(x)!=mp.end())
        {
            cout<<s.substr(0,x)<<endl;
            return 0;
        }
        x=lps[x-1];
    }
    cout<<"Just a legend"<<endl;
}