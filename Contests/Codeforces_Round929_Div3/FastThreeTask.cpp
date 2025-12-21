#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,sum=0,count=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%3==1)
            count++;
            sum+=arr[i];
        }
        if(sum%3==0)
        cout<<"0"<<endl;
        else if(sum%3==2)
        cout<<"1"<<endl;
        else
        {
          if(count>0)
          cout<<"1"<<endl;
          else
          cout<<"2"<<endl;
        }
    }
}