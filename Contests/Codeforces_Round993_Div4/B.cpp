#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
 string s;cin>>s;
 reverse(s.begin(),s.end());
 for(int i=0;i<s.length();i++)
 {
    if(s[i]=='p')
    cout<<'q';
    else if(s[i]=='q')
    cout<<'p';
    else
    cout<<'w';
 }
 cout<<endl;
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