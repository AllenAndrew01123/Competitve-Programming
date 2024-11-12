#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for(int i=0;i<n;i++)
    cout<<*lower_bound(b.begin(),b.end(),a[i])-a[i]<<" ";
    cout<<endl;
    int idx=0;
    for(int i=0;i<n;i++)
    {
        idx=max(idx,i);
        while(idx<n-1 && a[idx+1]<=b[idx])
        idx++;
        cout<<b[idx]-a[i]<<" ";
    }
    cout<<endl;
    
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