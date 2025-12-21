#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n,m;cin>>n;
    long long a=0,b=0;
    vector<pair<int,int>> v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i].first;
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    cin>>m;
    while(m--)
    {
        int x;cin>>x;
        a+=v[x].second;
        b+=(n-v[x].second+1);
    }
    cout<<a<<" "<<b;
}