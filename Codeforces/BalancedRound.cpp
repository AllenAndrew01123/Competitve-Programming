#include<bits/stdc++.h>
using namespace std;
int solve(int a[],int n,int k)
{
    sort(a,a+n);
    int c=0;int max=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]-a[i]<=k)
        c++;
        else
        {
            if(c>max)
            max=c;
            c=0;
        }
         if(c>max)
            max=c;

    }
    return n-max-1;

}
signed main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int k;cin>>k;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        cout<<solve(a,n,k)<<'\n';
    }

}