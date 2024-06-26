#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n,m;cin>>n>>m;
    ll left=m,right=m;
    ll time[n+1],lower[n+1],upper[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>time[i]>>lower[i]>>upper[i];
    }
    time[0]=0;
    for(int i=1;i<=n;i++)
    {
        left-=time[i]-time[i-1];
        right+=time[i]-time[i-1];
        if(right<lower[i]||upper[i]<left)
        {
            cout<<"NO"<<endl;
            return;
        }
        if(left<lower[i])
        left=lower[i];
        if(right>upper[i])
        right=upper[i];
    }
    cout<<"YES"<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}