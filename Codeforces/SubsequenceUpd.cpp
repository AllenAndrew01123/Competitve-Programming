#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n, l, r;
    cin >> n >> l >> r;
    ll arr[n + 1];
    multiset<ll> s1, s2;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (i < l)
            s1.insert(arr[i]);
        else if (i >= l && i <= r)
        {
            s1.insert(arr[i]);
            s2.insert(arr[i]);
        }
        if (i > r)
            s2.insert(arr[i]);
    }
    ll sum1=0,sum2=0,len=r-l+1;
    ll temp=len;
    for(auto x:s1)
    {
        sum1+=x;
        temp--;
        if(temp==0)
        break;
    }
    temp=len;
    for(auto x:s2)
    {
        sum2+=x;
        temp--;
        if(temp==0)
        break;
    }
    cout<<min(sum1,sum2)<<endl;
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