#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;cin>>n;
    map <int,int> mp;
    int i,a;
    for(i=0;i<n;i++)
    {
        cin>>a;
        mp[a]++;
    }
    if(mp[1]<=mp[3])
    cout<<mp[4]+mp[1]+abs(mp[3]-mp[1])+ceil(mp[2]/2.0);
    else
    cout<<mp[4]+mp[3]+ceil((mp[1]-mp[3]+2*mp[2])/4.0);
    // int sum=0,a;
    // for(;cin>>a;)sum+=a;
    // cout<<ceil(sum/4.0);

}