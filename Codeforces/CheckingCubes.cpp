#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    int n,f,k;
    cin>>n>>f>>k;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int fav=a[f];
    sort(a+1,a+n+1,greater<int>());
    if(a[k]<fav || k==n)
    {
        cout<<"YES"<<endl;
        return;
    }
    if(a[k]>fav)
    {
        cout<<"NO"<<endl;
        return;
    }
    if(a[k]==fav)
    {
        if(a[k+1]==fav)
        {
            cout<<"MAYBE"<<endl;
            return;
        }
        else
        {
            cout<<"YES"<<endl;
            return;
        }
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}