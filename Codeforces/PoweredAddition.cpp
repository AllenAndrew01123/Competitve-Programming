#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    int a[n];
    int mx=-1e9;
    int md=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
        md=max(md,mx-a[i]);
    }
    if(md==0)
    {
        cout<<0<<endl;
        return;
    }
    else 
    {
        cout<<floor(log2(md))+1<<endl;
        return;
    }
}
    
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}