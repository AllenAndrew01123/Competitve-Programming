#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;cin>>n;
    char arr[n][4];
    vector<ll> ans;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='#')
            ans.push_back(j+1);

        }
    }
    reverse(ans.begin(),ans.end());
    for(auto x:ans)
    cout<<x<<" ";
    cout<<endl;
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