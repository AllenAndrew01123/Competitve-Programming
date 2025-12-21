#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    auto it =unique(arr.begin(), arr.end());
    arr.erase(it, arr.end());
    ll ans=0;
    if(arr.size()==1)
    {
        cout<<1<<endl;
        return;
    }
    n=arr.size();
    if(arr[0]>arr[1])
    ans++;
    if(arr[n-1]>arr[n-2])
    ans++;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i-1]<arr[i]&&arr[i]>arr[i+1])
        ans++;
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