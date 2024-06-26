#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int n;cin>>n;
    int a[n+1],b[n+1],pref1[n+1],pref2[n+1];
    pref1[0]=0,pref2[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        pref1[i]=pref1[i-1]+a[i];
    }
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++)
    {
        pref2[i]=pref2[i-1]+b[i];
    }
    int m;cin>>m;
    while(m--)
    {
        int l,r,type;cin>>type>>l>>r;
        if(type==1)
        cout<<pref1[r]-pref1[l-1]<<endl;
        else
        cout<<pref2[r]-pref2[l-1]<<endl;
    }
}
signed main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
}