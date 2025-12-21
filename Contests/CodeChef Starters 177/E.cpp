#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll dp[200001];
void calc()
{
    dp[1]=1;
    for(int i=1;i<200000;i++)
    {
        if(i&1)
        {
            ll a=(i-1)/2;
            dp[i+1]=dp[i]+(3*a*a+5*a+4)/2;
        }
        else
        {
            ll a=i/2;
            dp[i+1]=dp[i]+(a*(a+1))/2;
        }
    }
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    calc();
    int t;cin>>t;
    while(t--)
    {
        ll x;cin>>x;
        cout<<dp[x]<<endl;
    }
}