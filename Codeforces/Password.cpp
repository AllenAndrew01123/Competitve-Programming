#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    string s;cin>>s;
    ll l=0,r=s.length();
    string ans="";
    while(l<=r)
    {
        ll mid=r-(r-l)/2;
        string temp1=s.substr(0,mid);
        if(s.find(temp1,1)!=string::npos && s.find(temp1,s.find_last_of(s[0]))!=string::npos && s.find(temp1,1)!=s.find_last_of(s[0]))
        {
            l=mid+1;
            ans=temp1;
        }
        else
        r=mid-1;
    }
    if(ans.empty())
    cout<<"Just a legend"<<endl;
    else if(s.substr(s.length()-ans.length(),ans.length())!=ans)
    cout<<"Just a legend"<<endl;
    else
    cout<<ans<<endl;
}