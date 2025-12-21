#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;cin>>n;
    long long ans=n*1LL*(n-1)/2;
    map <int,int> mp;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        mp[a]++;
    }
    if(mp.rbegin()->first-mp.begin()->first!=0)
    cout<<mp.rbegin()->first-mp.begin()->first<<" "<<mp.rbegin()->second*1LL*mp.begin()->second;
    else
    cout<<0<<" "<<ans;
}