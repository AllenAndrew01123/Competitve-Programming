#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    map <int,int> mp;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        mp[a]++;
    }
    int cnt=0;
    for(auto x:mp)
    {
            if(x.second>=3)
            cnt+=x.second/3;

    }
    cout<<cnt<<endl;
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