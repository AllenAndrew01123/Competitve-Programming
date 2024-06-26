#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n,m;cin>>n>>m;
    int a[n];
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;;i++)
    {
        if(a[i]>0)
        break;
    }
    if(i>m)
    cout<<-accumulate(a,a+m,0);
    else
    cout<<-accumulate(a,a+i,0);
}