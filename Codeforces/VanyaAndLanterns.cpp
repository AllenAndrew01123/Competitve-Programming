#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    long long l;
    double d;
    int n;
    cin>>n>>l;
    int a[n];
    int i=0;
    while(cin>>a[i])i++;
    sort(a,a+n);
    float left=0,right=0;
    if(a[0]!=0)
    left=a[0];
    if(a[n-1]!=l)
    right=l-a[n-1];
    i=1;
    float ma=INT_MIN;
    for(;i<n;i++)
    {
        if(a[i]-a[i-1]>ma)
        ma=a[i]-a[i-1];
    }
    d=max(max(left,right),ma/2);
    cout<<fixed<<d;
}