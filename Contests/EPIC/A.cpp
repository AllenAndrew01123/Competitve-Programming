#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string s;cin>>s;
    map<ll,ll> mp,mp2;
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]-48]++;
    }
    ll x=1;
    while(true)
    {
        ll temp=x;
        while(temp>0)
        {
            mp2[temp%10]++;
            temp/=10;
        }
        if(mp==mp2)
        {
            cout<<x<<endl;
            return 0;
        }
        x++;
    }
}