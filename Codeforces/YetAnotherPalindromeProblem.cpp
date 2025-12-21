#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        for(int k=j+2;k<n;k++)
        {
            if(a[k]==a[j])
            {
                cout<<"YES\n";
                return;
            }
        }
    }
    cout<<"NO\n";
    return;
}
main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}