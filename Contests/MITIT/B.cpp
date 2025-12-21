#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    string a,b;
    cin>>a>>b;
    ll lstpos1=a.rfind('P');
    ll lstpos2=b.rfind('P');
    if(lstpos1!=string::npos)
    {
        string anew="";
        for(int i=0;i<=lstpos1;i++)
        {
            if(a[i]=='P')
            anew+='P';
        }
        for(int i=lstpos1+1;i<a.length();i++)
        {
            anew+='N';
        }
        a=anew;
    }
    if(lstpos2!=string::npos)
    {
        string bnew="";
        for(int i=0;i<=lstpos2;i++)
        {
            if(b[i]=='P')
            bnew+='P';
        }
        for(int i=lstpos2+1;i<b.length();i++)
        {
            bnew+='N';
        }
        b=bnew;
    }
    if(a==b)
    cout<<"YES\n";
    else
    cout<<"NO\n";
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