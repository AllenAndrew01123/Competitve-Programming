#include<bits/stdc++.h>
using namespace std;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n;cin>>n;
    
    int arr[n];
    int i=0;
    while(cin>>arr[i])i++;
    if(n==1)
    cout<<"1";
    else
    {
        sort(arr,arr+n);
        int k=0;
        while(k<n)
        {
            if(accumulate(arr+n-k-1,arr+n,0)>accumulate(arr,arr+n-k-1,0))
            {
                break;
            }
            k++;
        }
        cout<<k+1;
    }
}