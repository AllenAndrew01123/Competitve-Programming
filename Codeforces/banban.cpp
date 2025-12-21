#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    ll left=2;
    ll right=3*n;
    vector<pair<ll,ll>>ans;
    while(left<right)
    {
        ans.push_back(make_pair(left,right));
        left+=3;
        right-=3;
    }
    cout<<ans.size()<<endl;
    for(auto x:ans)
    cout<<x.first<<" "<<x.second<<endl;
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