#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,common=0,count=0;
    cin>>n;
    int a[n],b[n];
    int i=0;
    while(cin>>a[i]>>b[i])
    {
        if(a[i]==b[i])
        common++;
        i++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            count++;
        }
    }
    cout<<count-common;





}