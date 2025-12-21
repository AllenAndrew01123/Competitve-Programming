#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    sort(v.begin(),v.end(),greater<int>());
    ll ans=0;
    ll score=0;
    for(int i=0;i<n;i++)
    {
        score++;
        if(score*(v[i])>=x)
        {
            ans++;
            score=0;
        }
    }
    cout<<ans<<endl;
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