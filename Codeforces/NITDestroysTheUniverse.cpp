#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> v, arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if(count(arr.begin(),arr.end(),0)==n)
    {
        cout<<0<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i])
        v.push_back(i);
    }
    for(int i=1;i<v.size();i++)
    {
        if(v[i]-v[i-1]!=1)
        {
            cout<<2<<endl;
            return;
        }
    }
    cout<<1<<endl;
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
