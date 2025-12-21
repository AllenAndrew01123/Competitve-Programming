#include<bits/stdc++.h>
using namespace std;
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        int i=0;
        for(;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int diff=INT_MAX;
        for(i=n-1;i>0;i--)
        {
            if(a[i]-a[i-1]<diff)
            diff=a[i]-a[i-1];
        }
        cout<<diff<<endl;
    }
}