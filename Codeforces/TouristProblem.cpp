#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll s1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s1 += arr[i];
    }
    sort(arr, arr + n);
    vector<ll> diff, pref;
    for (int i = 1; i < n; i++)
        diff.push_back(arr[i] - arr[i - 1]);
    ll s2 =0,c1=1,c2=diff.size();
    for (auto x : diff)
    {
        s2+=x*c1*c2;
        c1++;
        c2--;
    }
    ll num=s1+2*s2;
    ll denom=n;
    ll g=__gcd(num,denom);
    cout<<num/g<<" "<<denom/g<<endl;
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