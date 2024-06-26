#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        int i=0,c=0;
        while(i<n){cin>>a[i];i++;}
        sort(a,a+n);
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]<=1)
            c++;
        }
        if(n-c==1)
        cout<<"YES\n";
        else cout<<"NO\n";
    }
}