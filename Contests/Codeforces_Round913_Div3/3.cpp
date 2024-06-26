#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    map<char,int>mp;
    int mx=0;
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
        mx=max(mx,mp[s[i]]);
    }
    if(n%2==0)
    {
        cout<<max(0,2*mx-n)<<endl;
        return;
    }
    else
    {
        cout<<max(1,2*mx-n)<<endl;
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}