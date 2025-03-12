#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll mx = (1 << n) - 1;
    ll mn=LLONG_MAX;
    for (ll i = 0; i <= mx; i++)
    {
        ll sum1=0,sum0=0;
        for(int j=n-1;j>=0;j--)
        {
            if((i>>j)&1)
            sum1+=arr[j];
            else
            sum0+=arr[j];
        }
        mn=min(mn,abs(sum1-sum0));
    }
    cout<<mn<<endl;
}