#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n+2,vector<int>(m+2,0));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(max({a[i][j],a[i-1][j],a[i+1][j],a[i][j-1],a[i][j+1]})==a[i][j])
            a[i][j]=max({a[i-1][j],a[i+1][j],a[i][j-1],a[i][j+1]});
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

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