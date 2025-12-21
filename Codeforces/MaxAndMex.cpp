#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    set<ll> s;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s.insert(v[i]);
    }
    if(k==0)
    {
        cout<<s.size()<<endl;
        return;
    }
    sort(v.begin(), v.end());
    ll mex = 0;
    for (auto x : v)
    {
        if (x == mex)
            mex++;
    }
    ll mx = v[n - 1];
    if (mex > mx)
    {
        cout <<s.size()+k<<endl;
        return;
    }
    else 
    {
        if(s.find((mx+mex+1)/2)!=s.end())
        cout<<s.size()<<endl;
        else
        cout<<s.size()+1<<endl;
    }
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
