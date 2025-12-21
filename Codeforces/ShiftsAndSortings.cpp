#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;cin>>s;
    long long ans=0;
    long long pos=0;
    for(long long i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            if(i==pos)
            {
                pos++;
                continue;
            }
            ans+=i-pos+1;
            pos++;
        }
    }
    cout<<ans<<endl;

}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}