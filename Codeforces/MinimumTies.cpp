#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    if(n==2)
    {
        cout<<0<<endl;
        return;
    }
    ll win;
    for(int i=1;n*(n-1)-2*i>=0;i++)
    {
        if(((i%n)==0)&&((n*(n-1)-2*i)%n==0))
        win=i;
    }
    ll winpp=win/n;
    ll drawpp=(n*(n-1)-2*win)/n;
    vector<ll>v(n-1);
    ll idx=0;
    for(int i=1;i<=winpp;i++)
    {
        v[idx]=1;
        idx++;
    }
    for(int i=1;i<=drawpp;i++)
    {
        v[idx]=0;
        idx++;
    }
    for(int i=1;i<=winpp;i++)
    {
        v[idx]=-1;
        idx++;
    }
    for(int end=n-1;end>=0;end--)
    {
        for(int start=0;start<end;start++)
        cout<<v[start]<<" ";
    }
    cout<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
// 1 1 -1 -1 1 1 -1 1 1 1