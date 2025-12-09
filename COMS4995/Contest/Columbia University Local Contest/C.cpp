#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
bool check(string s1,string s2,string s3,char c)
{
    if(s1[0]==c && s2[0]==c && s3[0]==c)
    return true;
    if(s1[1]==c && s2[1]==c && s3[1]==c)
    return true;
    if(s1[2]==c && s2[2]==c && s3[2]==c)
    return true;
    if(s1[0]==c && s1[1]==c && s1[2]==c)
    return true;
    if(s2[0]==c && s2[1]==c && s2[2]==c)
    return true;
    if(s3[0]==c && s3[1]==c && s3[2]==c)
    return true;
    if(s1[0]==c && s2[1]==c && s3[2]==c)
    return true;
    if(s1[2]==c && s2[1]==c && s3[0]==c)
    return true;
    return false;
}
void solve()
{
    string s1,s2,s3;cin>>s1>>s2>>s3;
    if(check(s1,s2,s3,'X'))
    cout<<'X'<<endl;
    else if(check(s1,s2,s3,'O'))
    cout<<"O"<<endl;
    else
    cout<<"DRAW"<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }
}