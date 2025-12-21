#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int m,i=1;
    int arr[n];
    while(cin>>m)
    {
        arr[m-1]=i;
        i++;
    }
    int j=0;
    for(;j<n;j++)
    cout<<arr[j]<<" ";


}