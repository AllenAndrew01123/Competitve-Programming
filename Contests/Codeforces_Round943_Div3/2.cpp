#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b;cin>>a>>b;
    string n,m;
    cin>>n>>m;
    int i=0,j=0;
    int ans=0;
    while(j<b)
    {
        if(n[i]==m[j])
        {
            i++;
        }
        j++;
    }
    cout<<i<<endl;
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