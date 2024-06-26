#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int cnt1=0,cnt2=0;
    while(n--)
    {
        char c;cin>>c;
        if(c=='U')
        cnt1++;
        else
        cnt2++;
    }
    if(cnt1&1)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}