#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    int n,m;cin>>n>>m;
    if(n<m)
    {
        cout<<"No"<<endl;
        return;
    }
    else if((n-m)&1)
    {
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
    return;
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