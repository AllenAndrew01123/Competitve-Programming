#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    int arr[n];
    int i=0;
    int maxidx;
    int minidx;
    int min=INT_MAX;
    int max=INT_MIN;
    for(;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
        {
            max=arr[i];
            maxidx=i;
        }
        if(arr[i]<=min)
        {
            min=arr[i];
            minidx=i;
        }
    }
    if(maxidx>minidx)
    cout<<maxidx+(n-minidx-2);
    else if(maxidx<minidx)
    cout<<maxidx+(n-1-minidx);
    else cout<<0;

}