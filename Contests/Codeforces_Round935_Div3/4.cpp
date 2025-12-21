#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;cin>>n>>m;
    long long a[n+1],b[n+1];
    long long ans=0;
    long long suf[m+1];
    suf[0]=0;
    vector <long long> dp (m+1);
    dp[0]=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<=m;i++)
    {
        suf[i]=suf[i-1]+b[i];
    }
    for(int i=1;i<=m;i++)
    {
        dp[i]=a[i]+suf[m]-suf[i];
    }
    for(int i=m+1;i<=n;i++)
    {
        ans+=min(a[i],b[i]);
    }
    cout<<ans+*min_element(dp.begin(),dp.end())<<endl;

}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}