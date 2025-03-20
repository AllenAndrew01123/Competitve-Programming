#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n,q;
    cin>>n>>q;
    set<ll>s;
    multiset<ll>ans;
    vector<ll>v;
    s.insert(0);
    s.insert(n);
    ans.insert(n);
    while(q--)
    {
        ll x;cin>>x;
        auto it=s.lower_bound(x);
        ll left=*prev(it);
        ll right=*it;
        ll diff=right-left;
        ans.erase(ans.lower_bound(diff));
        ans.insert(x-left);
        ans.insert(right-x);
        v.push_back(*(prev(ans.end())));
        s.insert(x);
    }
    for(auto x:v)
    cout<<x<<" ";
}