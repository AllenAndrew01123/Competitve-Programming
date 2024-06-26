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
        while(i<n)
        {
            cin>>a[i];
            i++;
        }
        sort(a,a+n);
        int j,index;
        if(n%2==0)
        {
             j=a[n/2-1];
             index=n/2-1;
         }
         else
         {
            index=n/2;
            j=a[index];
         }
         int c=0;
         for(i=index;i<n;i++)
         {
            if(a[i]==j)
            c++;
         }
         cout<<c<<endl;
    }
}