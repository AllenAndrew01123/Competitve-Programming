#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll x1,x2,y1,y2;cin>>x1>>y1>>x2>>y2;
    cout<<(x2-x1)*(y2-y1)+1<<endl;
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
