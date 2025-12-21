#include<bits/stdc++.h>
using namespace std;
void solve(int n,int m)
{
    vector <pair<string,int>> v1;
    vector <pair<string,int>> v2;
    for(int i=0;i<m;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        v1.push_back(make_pair(s1,(int)s1.length()));
        v2.push_back(make_pair(s2,(int)s2.length()));
    }
    for(int i=0;i<n;i++)
    {
        string ne;cin>>ne;
        auto pos=find(v1.begin(),v1.end(),make_pair(ne,(int)ne.length()))-v1.begin();
        if(v1[pos].second<=v2[pos].second)
        cout<<v1[pos].first<<" ";
        else
        cout<<v2[pos].first<<" ";
    }
    // map <string,string> mp;
    // for(int i=0;i<m;i++)
    // {
    //     string s1,s2;cin>>s1>>s2;
    //     mp[s1]=s2;
    // }
    // for(int i=0;i<n;i++)
    // {
    //     string s;cin>>s;
    //     if(s.length()<=mp[s].length())
    //     cout<<s<<" ";
    //     else
    //     cout<<mp[s]<<" ";
    // }
    
}
signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n,m;cin>>n>>m;
    solve(n,m);
}