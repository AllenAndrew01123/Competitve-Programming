#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    int n,m;cin>>n>>m;
    char arr[n+1][m+1];
    vector<pair<int,int>> pot;
    vector<pair<int,int>> final;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='#')
            {
                pot.push_back({i,j});
            }
        }
        if(pot.size()>0)
        final.push_back(pot[pot.size()/2]);
        pot.clear();
    }
    int x=final[final.size()/2].first;
    int y=final[final.size()/2].second;
    cout<<x<<" "<<y<<endl;
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