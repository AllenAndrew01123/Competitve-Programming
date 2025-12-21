#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    ll l;
    cin >> l;
    ll ans = 1;
    l-=12;
    ll n=l+11;
    ll k=11;
    for (int i = 1; i <= k; i++)
        ans =ans* (n-k+i)/i;
    cout << ans << endl;
}