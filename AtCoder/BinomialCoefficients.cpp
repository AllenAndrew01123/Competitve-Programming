#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i<n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    ll mx = v[n - 1];
    ll num=(mx+1)/2;
    auto it = lower_bound(v.begin(), v.end(), num);
    ll val1 = *it;
    ll val2 = (it == v.begin()) ? val1 : *(--it);
    if (abs(num - val1) < abs(num - val2))
        cout << mx << " " << val1 << endl;
    else
        cout << mx << " " << val2 << endl;
}