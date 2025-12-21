#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;cin>>n;
    int arr[n];
    int i=0;
    while(cin>>arr[i])i++;
    sort(arr,arr+n);
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=(arr[n-1]-arr[i]);
    }
    cout<<sum;
}