#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;cin>>n;
    map<string ,int> mp;
    while(n--)
    {
        string s;cin>>s;
        if(mp[s]==0)
        {
            mp[s]++;
            cout<<"OK\n";
        }
        else
        {
            string g=s+to_string(mp[s]);
            cout<<g<<endl;
            mp[g]++;
            mp[s]++;
        }
    }
}