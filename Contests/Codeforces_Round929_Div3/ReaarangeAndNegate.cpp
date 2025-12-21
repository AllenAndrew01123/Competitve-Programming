#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int i=0;
        for(;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        i=0;
        int sum;
        if(arr[i]<0)
        sum=-arr[i];
        else
        sum=arr[i];
        i++;
        for(;i<n;i++)
        {
            if(arr[i]<=0)
            sum=sum-arr[i];
            else
            sum=sum+arr[i];
        }
        cout<<sum<<endl;;

    }
}