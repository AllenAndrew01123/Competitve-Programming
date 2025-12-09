#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll r,c,n;cin>>r>>c>>n;
    vector<pair<ll,ll>>p(n);
    for(int i=0;i<n;i++)
    {
        ll x,y;cin>>x>>y;
        p.push_back({x-1,y-1});
    }
    vector<vector<priority_queue<ll>>> v(r,vector<priority_queue<ll>>(c));
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            for(auto x:p)
            {
                v[i][j].push(-abs(x.first-i)-abs(x.second-j));
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<-v[i][j].top()<<" ";
            v[i][j].pop();
        }
        cout<<endl;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<-v[i][j].top()<<" ";
            v[i][j].pop();
        }
        cout<<endl;
    }


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