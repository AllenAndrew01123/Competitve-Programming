#include<bits/stdc++.h>
using namespace std;
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int i=0,c=0;
        for(;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(arr[0]!=arr[1])
        cout<<"YES\n";
        else
        {
            for(int j=2;j<n;j++)
            {
                if(arr[j]%arr[0]==0)
                c++;
            }
            if(c==n-2)
            cout<<"NO\n";
            else cout<<"YES\n";
        }

    }
}