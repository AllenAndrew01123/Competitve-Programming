#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    string s;cin>>s;
    if(floor(sqrt(n))!=ceil(sqrt(n)))
    {
        cout<<"No\n";
        return;
    }
    ll dim=sqrt(n);
    ll idx=0;
    bool flag=true;
    for(int i=0;i<dim;i++)
    {
        for(int j=0;j<dim;j++)
        {
            if((i==0 || j==0 || i==dim-1 || j==dim-1)&&(s[idx]=='0'))
            flag=false;
            if(i>0 && i<(dim-1) && j>0 && j<(dim-1) && s[idx]=='1')
            flag=false;
            idx++;
        }
    }
    if(flag)
    cout<<"Yes\n";
    else
    cout<<"No\n";
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