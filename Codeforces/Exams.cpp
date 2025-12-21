#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
    {
        int a,b;cin>>a>>b;
        v[i]={a,b};
    }
    sort(v.begin(),v.end());
    int a=0;
    for(int i=0;i<n;i++)
    {
        if(v[i].second>=a)
        a=v[i].second;
        else
        a=v[i].first;
    }
    cout<<a;
}