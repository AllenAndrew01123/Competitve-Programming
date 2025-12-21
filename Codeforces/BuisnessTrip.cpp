#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int k;cin>>k;
    int a[12];
    int i=0;
    while(cin>>a[i])i++;
    sort(a,a+12);
    int sum=0;
    int j;
    if(k==0)
    cout<<0;
    else
    {
        for(j=11;j>=0;j--)
    {
        sum+=a[j];
        if(sum>=k)
        break;
    }
    if(j==-1)
    cout<<-1;
    else
    cout<<12-j;
    }

}