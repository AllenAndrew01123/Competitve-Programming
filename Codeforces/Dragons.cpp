#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int s,n;cin>>s>>n;
    int a[n];
    int b[n];
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        mp[a[i]]=mp[a[i]]+b[i];
    }
    // for(int i=0;i<n;i++)
    // {
    //     cin>>b[i];
    //     mp[a[i]]=b[i];
    // }
    // for(auto x:mp)
    // cout<<x.first<<" "<<x.second<<endl;;
    auto it=mp.begin();
    while(it!=mp.end())
    {
        // cout<<it->first<<endl;
        if(s>it->first)
        {
            // cout<<s;
            s+=it->second;
            it++;
        }
        else
        break;
    }
    if(it==mp.end())
    cout<<"YES";
    else
    cout<<"NO";


}