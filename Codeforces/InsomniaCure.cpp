#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    set <int> ans;
    int i=k;
    while(i<=d)
    {
        ans.insert(i);
        i+=k;
    }
    i=l;
    while(i<=d)
    {
        ans.insert(i);
        i+=l;
    }
    i=m;
    while(i<=d)
    {
        ans.insert(i);
        i+=m;
    }
    i=n;
    while(i<=d)
    {
        ans.insert(i);
        i+=n;
    }
    cout<<ans.size();
}