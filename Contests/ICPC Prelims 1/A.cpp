#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n + 1];
    ll pref[n + 1] = {0};
    ll fix[n + 1] = {0};
    vector<ll>ans;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr + 1, arr + n + 1);
    for (int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] + arr[i];
    }
    for(int i=1;i<=k;i++)
    fix[i]=arr[i];
    for(int i=k+1;i<=n;i++)
    fix[i]=arr[i]+fix[i-k-1];
    for(int m=1;m<=n;m++)
    {
        if(m<=k)
        ans.push_back(pref[m]);
        else
        ans.push_back(pref[m]-fix[m-k]);
    }
    for(auto x:ans)
    cout<<x<<" ";
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