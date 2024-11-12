#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n,k;cin>>n>>k;
    string s;cin>>s;
    string sub=s;
    for(int i=1;i<n;i++)
    {
        if(s[i]>s[0])
        {
            sub=s.substr(0,i);
            break;
        }
    }
    ll num=k/sub.length();
    ll ex=k%sub.length();
    string ans="";
    for(int i=1;i<=num;i++)
    {
        ans+=sub;
    }
    cout<<ans+sub.substr(0,ex)<<endl;

}