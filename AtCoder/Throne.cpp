#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
ll ext_gcd(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1; y = 0;
        return a;
    }
    ll x1, y1;
    ll g = ext_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return g;
}

ll modInverse(ll a, ll m) {
    ll x, y;
    ext_gcd(a, m, x, y);
    x %= m;
    if (x < 0) x += m;
    return x;
}
void solve()
{
    ll n,s,k;cin>>n>>s>>k;
    ll g=__gcd(k,n);
    if((n-s)%g!=0)
    {
        cout<<-1<<endl;
        return;
    }
    n/=g;
    s/=g;
    k/=g;
    ll res=n-s;
    cout<<((modInverse(k,n)%n)*(res%n))%n<<endl;
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}