#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    int n;
    cin >> n;
    int a[n + 1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    int ans=0;
    for(int i=0;i<=20;i++)
    {
        int mx=0,d=0;
        for(int j=1;j<=n;j++)
        {
            if((a[j]>>i)&1)
            {
                mx=max(mx,d);
                d=0;
            }
            else
            {
                d++;
            }
            // cout<<mx<<" "<<d<<endl;
        }
        if(d==n)
        continue;
        else
        ans=max(mx,max(ans,d));
    }
    cout<<ans+1<<endl;
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