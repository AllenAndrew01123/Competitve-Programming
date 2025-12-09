#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    string s;cin>>s;
    reverse(s.begin(),s.end());
    ll n=s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='p')
        s[i]='q';
        else if(s[i]=='q')
        s[i]='p';
    }
    cout<<s<<endl;
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