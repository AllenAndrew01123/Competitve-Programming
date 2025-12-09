#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    if (arr[0] & 1 && n == 1)
    {
        cout << -1 << endl;
        return;
    }
    vector<ll>ans;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<1<<endl;
            cout<<i+1<<endl;
            return;
        }
        else
        ans.push_back(i+1);
    }
    cout<<2<<endl;
    cout<<ans[0]<<" "<<ans[1]<<endl;
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