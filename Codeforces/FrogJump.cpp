#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    string s;cin>>s;
    vector <int> x;
    x.push_back(0);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='R')
        x.push_back(i+1);
    }
    x.push_back(s.length()+1);
    int mx=INT_MIN;
    for(int i=1;i<x.size();i++)
    {
        mx=max(mx,x[i]-x[i-1]);
    }
    cout<<mx<<endl;


}
signed main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}