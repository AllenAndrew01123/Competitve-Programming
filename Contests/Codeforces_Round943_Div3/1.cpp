#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x;cin>>x;
    int i,pos;
    int ans=0;
    for(i=1;i<x;i++)
    {
        if(__gcd(x,i)+i>ans)
        {
            ans=__gcd(x,i)+i;
            pos=i;
        }
    }
    cout<<pos<<endl;
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