#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    string s;
    cin>>s;
    ll idx=find(s.begin(),s.end(),'1')-s.begin();
    ll ans=0;
    ll flips=0;
    for(int i=idx+1;i<n;i++)
    {
        if(flips%2==0 && s[i]=='0')
        {
            ans++;
            flips++;
        }
        else if(flips&1 && s[i]=='1')
        {
            ans++;
            flips++;
        }
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