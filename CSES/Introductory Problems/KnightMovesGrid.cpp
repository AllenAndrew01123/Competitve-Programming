#include <algorithm>
#include <bitset>
#include <climits>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <unordered_set>
#include <vector>
#include <stack>
#include <sstream>
#include <deque>
using namespace std;
typedef long long ll;
#define mod 1000000007
bool checker(ll x,ll y,ll n)
{
    return (x>=0 && x<n)&&(y>=0 &&y<n) && !(x==0 && y==0);
}
void solve()
{
    ll n;cin>>n;
    vector<vector<ll>>ans(n,vector<ll>(n,0));
    queue<pair<ll,ll>>q;
    q.push({0,0});
    while(!q.empty())
    {
        auto x=q.front();
        q.pop();
        if(checker(x.first-1,x.second-2,n)&& ans[x.first-1][x.second-2]==0)
        {
            ans[x.first-1][x.second-2]=ans[x.first][x.second]+1;
            q.push({x.first-1,x.second-2});
        }
        if(checker(x.first-1,x.second+2,n)&& ans[x.first-1][x.second+2]==0)
        {
            ans[x.first-1][x.second+2]=ans[x.first][x.second]+1;
            q.push({x.first-1,x.second+2});
        }
        if(checker(x.first-2,x.second-1,n)&& ans[x.first-2][x.second-1]==0)
        {
            ans[x.first-2][x.second-1]=ans[x.first][x.second]+1;
            q.push({x.first-2,x.second-1});
        }
        if(checker(x.first-2,x.second+1,n)&& ans[x.first-2][x.second+1]==0)
        {
            ans[x.first-2][x.second+1]=ans[x.first][x.second]+1;
            q.push({x.first-2,x.second+1});
        }
        if(checker(x.first+1,x.second-2,n)&& ans[x.first+1][x.second-2]==0)
        {
            ans[x.first+1][x.second-2]=ans[x.first][x.second]+1;
            q.push({x.first+1,x.second-2});
        }
        if(checker(x.first+1,x.second+2,n)&& ans[x.first+1][x.second+2]==0)
        {
            ans[x.first+1][x.second+2]=ans[x.first][x.second]+1;
            q.push({x.first+1,x.second+2});
        }
        if(checker(x.first+2,x.second-1,n)&& ans[x.first+2][x.second-1]==0)
        {
            ans[x.first+2][x.second-1]=ans[x.first][x.second]+1;
            q.push({x.first+2,x.second-1});
        }
        if(checker(x.first+2,x.second+1,n)&& ans[x.first+2][x.second+1]==0)
        {
            ans[x.first+2][x.second+1]=ans[x.first][x.second]+1;
            q.push({x.first+2,x.second+1});
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    cin.tie(0)->sync_with_stdio(0);
    ll t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
