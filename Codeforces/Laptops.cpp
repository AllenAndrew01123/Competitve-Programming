#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;cin>>n;
    map <int,int> mp;
    int temp=n;
    while(n--)
    {
        int a,b;cin>>a>>b;
        mp[a]=b;
    }
    vector <int> p;
    for(auto x:mp)
    {
        p.push_back(x.second);
    }
    if(is_sorted(p.begin(),p.end()))
    cout<<"Poor Alex";
    else
    cout<<"Happy Alex";

}