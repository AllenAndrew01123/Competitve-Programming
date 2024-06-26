#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m;cin>>n>>m;
    int i=0;
    int a[n];
    int dp[n];
    while(i<n)
    {
        cin>>a[i];
        i++;
    }
    i=n-2;
    dp[n-1]=1;
    set <int> b;
    b.insert(a[n-1]);
    while(i>=0)
    {
        if(b.find(a[i])==b.end())
        {
            b.insert(a[i]);
            dp[i]=dp[i+1]+1;
        }
        else
        {
            dp[i]=dp[i+1];
        }
        i--;
    }
    while(m--)
    {
        int y;cin>>y;
        cout<<dp[y-1]<<endl;
    }

}