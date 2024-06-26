#include<bits/stdc++.h>
using namespace std;
signed main()
{
    int n,m;cin>>n>>m;
    int a[n];
    int max=1,idx;
    int i=0;
    while(cin>>a[i])
    {
        a[i]=ceil((a[i]*1.0/m*1.0));
        // cout<<a[i]<<" ";
        i++;
    }
    i=0;
    while(i<n)
    {
        if(a[i]>=max)
        {
            max=a[i];
            idx=i+1;
        }
        i++;
    }
    cout<<idx;

}