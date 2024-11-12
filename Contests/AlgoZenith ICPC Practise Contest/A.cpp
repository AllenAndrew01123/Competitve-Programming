#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll start=1;
    string s;cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A')
        {
            if(start==1)
            start=2;
            else if(start==2)
            start=1;
        }
        if(s[i]=='B')
        {
            if(start==2)
            start=3;
            else if(start==3)
            start=2;
        }
        if(s[i]=='C')
        {
            if(start==1)
            start=3;
            else if(start==3)
            start=1;
        }
    }
    cout<<start<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    while(t--)
    {
        solve();
    }
}