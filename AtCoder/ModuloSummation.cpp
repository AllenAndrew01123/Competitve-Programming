#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll ans=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans+=arr[i]-1;
    }
    cout<<ans<<endl;
}