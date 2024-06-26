#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    int mx=0;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        mp[x]++;
        mx=max(mx,mp[x]);
    }
    if(mx>=k)
    cout<<k-1<<endl;
    else
    cout<<n<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}