#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    string s = "aeiou";
    vector<ll>v(5,n/5);
    for(int i=0;i<n%5;i++)
    v[i]++;
    string ans="";
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<v[i];j++)
        ans+=s[i];
    }
    cout<<ans<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}