#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    cin>>a[i];
    int ans=3;
    for(int i=1;i<=n;i++)
    {
        if(i==a[a[i]])
        {
            ans=2;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}