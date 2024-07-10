#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n,k;cin>>n>>k;
    string s;cin>>s;
    sort(s.begin(),s.end());
    if(s[0]!=s[k-1])
    {
        cout<<s[k-1]<<endl;
        return;
    }
    else
    {
        cout<<s[0];
        if(s[k]!=s[n-1])
        {
            cout<<s.substr(k)<<endl;
            return;
        }
        int rem=n-k;
        for(int i=1;i<=(rem+k-1)/k;i++)
        {
            cout<<s[k];
        }
        cout<<endl;
        return;
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