#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
void solve()
{
    ll n;cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        mp[x]++;
    }
    int v=0,sum=0;
    priority_queue<int> q;
    for(auto x:mp)
    {
        v++;
        sum+=x.second+1;
        q.push(x.second+1);
        while(sum>v)
        {
            sum-=(q.top());
            q.pop();
        }
    }
    cout<<mp.size()-q.size()<<endl;
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