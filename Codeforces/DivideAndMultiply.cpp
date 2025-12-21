#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v1, v2;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x & 1)
            v1.push_back(x);
        else
            v2.push_back(x);
    }
    sort(v2.begin(),v2.end());
    ll mx=v2[v2.size()-1];
    v2.pop_back();
    ll mul=1;
    for(auto x:v2)
    {
        while(x%2==0)
        {
            mul++;
            x/=2;
        }
        v1.push_back(x);
    }
    cout<<accumulate(v1.begin(),v1.end(),0LL)+mx*(1LL<<(mul-1))<<endl;
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
