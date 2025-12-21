#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
   int n;cin>>n;
   string s;cin>>s;
   map<char,int> mp;
   ll sum=0;
   for(int i=0;i<n;i++)
   {
       mp[s[i]]++;
       if(mp[s[i]]==1)
       sum+=2;
       else
       sum++;
   }
   cout<<sum<<endl;
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