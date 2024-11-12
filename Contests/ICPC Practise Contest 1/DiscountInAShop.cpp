#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    string s;cin>>s;
    ll ans=LLONG_MAX;
    for(int i=0;i<s.length();i++)
    {
        string snew=s.substr(0,i)+s.substr(i+1,s.length()-i-1);
        ll num=stoi(snew);
        ans=min(ans,num);
    }
    cout<<ans<<endl;
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