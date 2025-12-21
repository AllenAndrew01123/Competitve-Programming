#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;cin>>s;
    char c=s[0];
    char no=s[1];
    for(int i='a';i<='h';i++)
    {
        if(i!=c)
        cout<<char(i)<<no<<endl;
    }
    for(int i='1';i<='8';i++)
    {
        if(i!=no)
        cout<<c<<char(i)<<endl;
    }
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