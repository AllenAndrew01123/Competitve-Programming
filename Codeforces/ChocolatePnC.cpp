#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if(sum==0)
    {
        cout<<0<<endl;
        return;
    }
    if(sum==1)
    {
        cout<<1<<endl;
        return;
    }
    vector<ll>diff;
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        cnt++;
        else
        {
            diff.push_back(cnt);
            cnt=0;
        }
    }
    ll ans=1;
    for(int i=1;i<diff.size();i++)
    {
        ans*=(diff[i]+1);
    }
    cout<<ans<<endl;

}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}