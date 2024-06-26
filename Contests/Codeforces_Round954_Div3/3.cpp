#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    int n,m;cin>>n>>m;
    string a;cin>>a;
    map<int,int> mp;
    for(int i=0;i<m;i++)
    {
        int x;cin>>x;
        mp[x-1]++;
    }
    string c;cin>>c;
    sort(c.begin(),c.end());
    int idx=0;
    for(auto x:mp)
    {
        a[x.first]=c[idx];
        idx++;
    }
    cout<<a<<endl;
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