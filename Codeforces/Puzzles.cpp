#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n,m;cin>>n>>m;
    int a[m];
    int i=0;
    while(cin>>a[i])i++;
    sort(a,a+m);
    int minimum=INT_MAX;
    for(int j=0,l=n-1;l<m;j++,l++)
    {
         if(a[l]-a[j]<minimum)
         minimum=a[l]-a[j];
    }
    cout<<minimum;
}