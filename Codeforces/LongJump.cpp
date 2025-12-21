#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;cin>>n;
    vector<long long> a;
    long long i=0;
    while(i<n)
    {
        long long x;cin>>x;
        a.push_back(x);
        i++;
    }
    // cout<<i<<endl;
    long long dp[n];
    for(i=n-1;i>=0;i--)
    {
        dp[i]=a[i];
        long long j=i+a[i];
        if(j<n)
        {
            dp[i]+=dp[j];
        }
        // cout<<dp[i]<<endl;
        // cout<<i<<endl;
    }
    cout<<*max_element(dp,dp+n)<<endl;


}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}