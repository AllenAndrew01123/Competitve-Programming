#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    int n;cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        mp[x]++;
    }
    for(auto x:mp)
    {
        if(x.second%2)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;
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