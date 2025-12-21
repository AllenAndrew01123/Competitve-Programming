#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    ll n = s1.length();
    string s4 = s2 + s2;
    if(s4.substr(0,n)==s1)
    {
        cout<<0<<endl;
        return;
    }
    for(int i=1;i<n;i++)
    {
        if(s4.substr(i,n)==s1)
        {
            cout<<1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}